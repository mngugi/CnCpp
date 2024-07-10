#include <pipewire/pipewire.h>
#include <stdio.h>

int main() {
    // Initialize PipeWire
    pw_init(NULL, NULL);

    // Create a PipeWire main loop
    struct pw_main_loop *main_loop = pw_main_loop_new(NULL);
    if (main_loop == NULL) {
        fprintf(stderr, "Failed to create PipeWire main loop. PipeWire might not be running.\n");
        pw_deinit();
        return 1;
    }

    // Create a PipeWire context
    struct pw_context *context = pw_context_new(pw_main_loop_get_loop(main_loop), NULL, 0);
    if (context == NULL) {
        fprintf(stderr, "PipeWire context creation failed. PipeWire might not be running.\n");
        pw_main_loop_destroy(main_loop);
        pw_deinit();
        return 1;
    }

    // Create a PipeWire core proxy
    struct pw_core *core = pw_context_connect(context, NULL, 0);
    if (core == NULL) {
        fprintf(stderr, "Failed to connect to PipeWire core. PipeWire might not be running.\n");
        pw_context_destroy(context);
        pw_main_loop_destroy(main_loop);
        pw_deinit();
        return 1;
    }

    printf("PipeWire is running.\n");

    // Clean up
    pw_core_disconnect(core);
    pw_context_destroy(context);
    pw_main_loop_destroy(main_loop);
    pw_deinit();

    return 0;
}


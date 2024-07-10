#include <pipewire/pipewire.h>
#include <stdio.h>

int main() {
    printf("Initializing PipeWire...\n");
    // Initialize PipeWire
    pw_init(NULL, NULL);

    printf("Creating PipeWire main loop...\n");
    // Create a PipeWire main loop
    struct pw_main_loop *main_loop = pw_main_loop_new(NULL);
    if (main_loop == NULL) {
        fprintf(stderr, "Failed to create PipeWire main loop. PipeWire might not be running.\n");
        pw_deinit();
        return 1;
    }

    printf("Creating PipeWire context...\n");
    // Create a PipeWire context
    struct pw_context *context = pw_context_new(pw_main_loop_get_loop(main_loop), NULL, 0);
    if (context == NULL) {
        fprintf(stderr, "PipeWire context creation failed. PipeWire might not be running.\n");
        pw_main_loop_destroy(main_loop);
        pw_deinit();
        return 1;
    }

    printf("Connecting to PipeWire core...\n");
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

    // Disconnecting from PipeWire core
    printf("Disconnecting from PipeWire core...\n");
    pw_core_disconnect(core);

    // Destroying PipeWire context
    printf("Destroying PipeWire context...\n");
    pw_context_destroy(context);

    // Destroying PipeWire main loop
    printf("Destroying PipeWire main loop...\n");
    pw_main_loop_destroy(main_loop);

    // Deinitializing PipeWire
    printf("Deinitializing PipeWire...\n");
    pw_deinit();

    printf("Program finished.\n");
    return 0;
}


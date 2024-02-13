#include <stdio.h>
#include <libusb-1.0/libusb.h>

int main() {
    libusb_device_handle *handle;
    int r;

    r = libusb_init(NULL);
    if (r < 0) {
        fprintf(stderr, "Error initializing libusb: %s\n", libusb_error_name(r));
        return 1;
    }

    handle = libusb_open_device_with_vid_pid(NULL, 0x8087, 0x8000);
    if (handle == NULL) {
        fprintf(stderr, "Error opening device\n");
        libusb_exit(NULL);
        return 1;
    }

    // Perform USB communication here

    libusb_close(handle);
    libusb_exit(NULL);
    return 0;
}


#include <stdio.h>
#include <signal.h>
#include <unistd.h>


void handle_sigterm(int sig) {

    printf("SIGERM".\n);
    fflush(stdout);



}


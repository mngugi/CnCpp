#include <stdio.h>
#include <signal.h>
#include <unistd.h>


void handle_sigterm(int sig) {

    printf("SIGERM".\n);
    fflush(stdout);

}

int main() {

    signal(SIGTERM, handle_sigterm);
    printf("Am Process %d. Kill me uick!\n", getpid());

    while(1) {
        pause();
    }
    return 0;
}


/**
 * @file chmod_example.c
 *
 * @brief This program demonstrates the use of the syscall function
 *        to invoke the chmod system call, changing the permissions
 *        of the "/etc/passwd" file to read-only (0444).
 */

#include <unistd.h>      // Provides access to POSIX operating system API
#include <sys/syscall.h> // Includes the header file for system call numbers
#include <errno.h>       // Provides error handling capabilities
#include <stdio.h>       // Standard input/output functions

/**
 * @brief The main function of the program.
 *
 * @return Returns 0 on successful execution.
 */
int main() {
    int rc; // Variable to store the return value of the system call

    // Invoking the chmod system call to set read-only permissions on "/etc/passwd"
    rc = syscall(SYS_chmod, "/etc/passwd", 0444);

    // Checking for errors in the system call
    if (rc == -1)
        fprintf(stderr, "chmod failed, errno = %d\n", errno);

    return 0; // Indicates successful execution
}

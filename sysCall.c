/**
The code you provided is an example of using the syscall function
to invoke the chmod system call to change the permissions of
the "/etc/passwd" file to read-only (0444).

**/
#include <unistd.h>
#include <sys/syscall.h>
#include <errno.h>
#include <stdio.h>

int main() {
int rc;

rc = syscall(SYS_chmod, "/etc/passwd", 0444);

if (rc == -1)
    fprintf(stderr, "chmod failed, errno = %d\n", errno);
return 0;

}

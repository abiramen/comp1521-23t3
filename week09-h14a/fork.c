// You are not expected to understand fork!

#include <stdio.h>
#include <unistd.h>

int main(void) {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Hello from child process!\
                My only goal in life to print this message.\n");
    } else if (pid != -1) {
        printf("Hello from parent process!\
                My only goal in life was to clone myself,\
                and I have now succeeded in this goal.\n");
    } else {
        printf("Fork failed!\n");
        perror("fork");
        return 1;
    }

    return 0;
}

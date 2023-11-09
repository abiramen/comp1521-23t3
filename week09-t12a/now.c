#include <stdio.h>
#include <spawn.h>

#define DATE_PATH "/usr/bin/date"

extern char **environ;

int main(void) {
    // call posix_spawn to print date +%d-%m-%Y
    pid_t date_pid;

    char *date_argv[] = {
        "/usr/bin/date",
        "+%d-%m-%Y",
        NULL
    };


    posix_spawn(
        &date_pid,              // pointer to a pid_t to keep track of the PID
        "/usr/bin/date",        // path to the program to spawn
        NULL,                   // file actions: used for setting up pipes (advanced!)
        NULL,                   // spawn attributes: don't worry about these
        date_argv,              // arguments to the program
        environ                 // environment variables       


    )

    // call posix_spawn to print date +%T

    return 0;
}

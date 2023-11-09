// Do NOT attempt this on a CSE machine.
// This will crash your machine.


#include <stdio.h>
#include <unistd.h>

int main() {
    while (1) {
        fork();
    }
    return 0;
}

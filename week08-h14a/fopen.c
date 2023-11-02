#include <stdio.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE *stream = fopen(argv[1], "r");

    if (stream == NULL) {
        perror(argv[1]);
        return 1;
    }

    return 0;
}

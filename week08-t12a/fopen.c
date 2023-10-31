#include <stdio.h>

int main(int argc, char **argv) {
    if (argc < 2) {
        printf("usage: %s <filename>", argv[0]);
        return 1;
    }

    FILE *stream = fopen(argv[1], "r");

    if (stream == NULL) {
        perror(argv[1]);
        return 1;
    }

    int c;


    while ((c = fgetc(stream)) != EOF && c != '\n') {
        fputc(c, stdout); 
    }
    putchar('\n');

    fclose(stream);
    // fgetc -> getchar
    // fputc -> putchar

    return 0;

}

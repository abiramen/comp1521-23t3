#include <stdio.h>
#define N_ELEMENTS 5

int main(void) {
    char array[N_ELEMENTS] = {'h', 'e', 'l', 'l', 'o'};

loop__init:
    int i = 0;
loop__cond:
    if (i >= N_ELEMENTS) goto loop__end;
loop__body:
    putchar(array[i]);          // array +  i
    putchar('\n');
loop__step:
    i++;
    goto loop__cond;

loop__end:

    return 0;
}


// What if we had
// int array[N_ELEMENTS] = {3, 1, 4, 1, 5};


// non recursively calculate a factorial in C
// Abiram Nadarajah, Feb 2022

#include <stdio.h>

int main(void) {
    int n;
    printf("n  = ");
    scanf("%d", &n);

    int fac = 1;

fac_loop__init:
    int i = 1;

fac_loop__cond:
    if (i > n) goto fac_loop__f;

fac_loop__body:
    fac *= i;

fac_loop__step:
    i++;
    goto fac_loop__cond;

fac_loop__f:

    printf("n! = %d\n", fac);
    return 0;
}

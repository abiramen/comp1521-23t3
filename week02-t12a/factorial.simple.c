// non recursively calculate a factorial in C
// Abiram Nadarajah, Feb 2022

#include <stdio.h>

int main(void) {
    int n;
    printf("n  = ");
    scanf("%d", &n);

    int fac = 1;
    
factorial_loop_init:;
    int i = 1;

factorial_loop_cond:
    if (i > n) goto factorial_loop_f;
factorial_loop_body:
    fac *= i;   
    // fac = fac * i;

factorial_loop_step:
    i++;
    goto factorial_loop_cond;

factorial_loop_f:

    printf("n! = %d\n", fac);
    return 0;
}

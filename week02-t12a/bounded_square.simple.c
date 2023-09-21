#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 46340) goto x_gt_46340;

    y = x * x;
    printf("%d\n", y);
    goto epilogue;


x_gt_46340:   
    printf("square too big for 32 bits\n");

epilogue:
    return 0;
}

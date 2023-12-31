#include <stdio.h>
#define N_ELEMENTS 5

int main(void) {
    char array[N_ELEMENTS] = {'h', 'e', 'l', 'l', 'o'};
    // array = &array[0]

    // &array[i] = array + i
    // array[i] = *(array + i) = *(i + array)
    // i[array] = *(i + array)

    for (int i = 0; i < N_ELEMENTS; i++) {
        printf("i = %d, &array[i] = %p ", i, array + i);
        putchar(i[array]);
        putchar('\n');
    }

    return 0;
}


// What if we had
// int array[N_ELEMENTS] = {3, 1, 4, 1, 5};



// &array[i] = array + i * sizeof(element)

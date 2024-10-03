#include <stdio.h>

// iterating through an array using a pointer

void main() {
    int array[] = {10, 30, 2000};
    int* ptr = array;

    for (int i = 0; i < 3; i++) {
        printf("%d\n", *(ptr + i));
    }
}


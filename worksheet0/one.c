#include <stdio.h>

//Declaring pointers to vars

void main() {

    int n = 0;
    int* ptr_to_n = &n;

    for (n; n < 5; n++) {
        printf("%d %p\n", n, &ptr_to_n);  
    }

}
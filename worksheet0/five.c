#include <stdio.h>

// swaps two variables using pointers

void swap(int * x, int * y){
    int temp_var = *x;
    *x = *y;
    *y = temp_var;
}

void main(){
    int x = 0;
    int y = 1;
    swap(&x,&y);
    printf("X:%d Y:%d",x,y);
}


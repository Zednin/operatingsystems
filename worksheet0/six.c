#include <stdio.h>

//ouptutting a 2D array

void print_array(int arr[][3], int width, int height) {
    for (int i = 0; i < height; i++) {
        for (int z = 0; z < width; z++) {
            printf("%d\n", arr[i][z]);
        }
    }
}

void main() {
    int height = 2;
    int width = 3;
    int arr[2][3] = {{1, 4, 2}, {3, 6, 8}};
    print_array(arr, width, height);
}
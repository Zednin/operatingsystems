#include <stdio.h>
#include <stdlib.h>

// read four numbers from a file and add them up

void main() {
    FILE *fptr;
    fptr = fopen("foo.txt", "r");

    char var[100];
    int total =0;


    // Read file
    while(fgets(var, 100, fptr)) {
        int num = atoi(var);
        total = total+num;

    }
    printf("Total: %d",total);

    // Close file
    fclose(fptr);
}
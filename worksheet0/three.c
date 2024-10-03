#include <stdio.h>

// takes input from two strings in main() then uses length() 
//to compare the lengths of the vars inputted and outputs 1 if
//they are even in length and 0 if not

void main() {
    char var_one[] = "hello";
    char var_two[] = "hello";
    printf("Output: %d", length(var_one, var_two));

}


int length(char var_one[], char var_two[]){
    int length_one = strlen(var_one);
    int length_two = strlen(var_two);
    if (length_one == length_two) {
        return 1;
    }
    else{
        return 0;
    }

}
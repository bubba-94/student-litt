#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Write a macro that returns TRUE if its parameter is divisible by 10 and FALSE otherwise
*/

// Macro to see if x is divisible by 10
#define DIVIDE(x) ((x) % 10 == 0 ? 1 : 0)

int main(){
    int number = 10;

    printf("DIVIDE(%i) = %i", number, DIVIDE(number));
    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Write a preprocessor macro that swaps two integers.
    (For the real hacker, write one that does not use a temporary variable declared outside the macro.)
*/
#define SWAP(a, b)                          \
    do {                                    \
        __typeof__(a) _tmp = (a);           \
        (a) = (b);                          \
        (b) = _tmp;                         \
    } while (0)
int main(){
    
    int a = 3;
    int b = 2;
    int *address = 0;
    
    printf("a = %d, b = \n");
    
    return 0;
}
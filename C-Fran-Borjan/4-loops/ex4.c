#include "../../use.h"


/*
    Multiplication table built like half a pyramid of n times
*/

int main(){

    int n = 15;

    for (int i = 1; i <= n; i++){
        printf("[%i]: ", i);
        for (int j = 1; j < i+1; j++){
            printf("%i ", i * j);
        }
        printf("\n");
    }
    return 0;
}
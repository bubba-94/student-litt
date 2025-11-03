#include <stdio.h>

#define SIZE 10

int main(){

    double arr[SIZE];

    for (int i = 0; i < SIZE; i++){
        arr[i] = 1.0 / i;
        printf("%.5f ", arr[i]);
    }

    return 0;
}
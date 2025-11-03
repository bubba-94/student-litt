#include <stdio.h>

#define SIZE 10

int main(){

    double arr[SIZE];
    
    for (int i = SIZE; i > 0; i--){
        arr[i] = 1.0 / i;
        printf("%.5f ", arr[i]);
    }
    return 0;
}
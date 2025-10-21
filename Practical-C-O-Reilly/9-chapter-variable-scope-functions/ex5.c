#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int size = 10;
    int arr[size];

    srand(time(NULL));
    
    int total = 0; 

    for (int i = 0; i < size; i ++){
        arr[i] = rand() % 100 + 1;
        total += arr[i];
    }

    printf("Value of arr[size] = %i\n", total);

    return 0;
}
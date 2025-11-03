#include <stdio.h>

#define SIZE 10

void right_shift(int arr[], int size);

int main (){

    int arr[SIZE];

    for (int i = 0; i < SIZE; i ++){
        arr[i] = i;
    }

    right_shift(arr, SIZE);

    printf("After shift\n");

    for (int i = 0; i < SIZE; i ++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}

void right_shift(int arr[], int size){

    int last = arr[size - 1];

    // Start from the back
    for (int i = size - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = last;
}
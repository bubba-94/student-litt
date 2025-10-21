#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    Write a function count(number, array, length) that counts the number of times number appears in array. 
    The array has length elements. The function should be recursive.
*/

int count(int, int[], int);

int main(){
    srand(time(NULL));

    int length = 50;
    int eval = 50; 
    int arr[length];

    for (int i = 0; i < length; i++){
        arr[i] = rand() % 100+1;
    }

    printf("Array: ");
    for (int i = 0; i < length; i++){
        printf("%i ", arr[i]);
    }

    int result = count(eval, arr, length);

    printf("\n%d occured %d times\n", eval, result);

    return 0;
}

int count(int number, int array[], int length){
    
    // Indexing
    if (length == 0){
        return 0;
    }

    if (array[length-1] == number) return 1 + count(number, array, length - 1);
    else return count(number, array, length -1);
}
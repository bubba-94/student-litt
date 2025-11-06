#include <stdio.h>

/*
    Create a function that prints all elements in an int array.
    The functions needs a pointer to an array and a int of how many elements in the array
    Use pointer arithmetics in the function
*/

#define SIZE 10

void print_arr(int arr[], int size){
    for (int *ptr = arr; ptr < arr+size; ptr++){
        printf("%d ", *ptr);
    }

}



int main (){
    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    print_arr(arr, SIZE);
    printf("\n");
    return 0;
}
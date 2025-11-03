#include <stdio.h>

#define SIZE 10

_Bool is_sorted(int arr[], int length);


int main(){

    int arr[SIZE] = {1,2,3,4,5,6,7,8,9,10};

    _Bool flag = is_sorted(arr, SIZE);

    printf("%s\n", flag ? "true" : "false");
    return 0; 
}

_Bool is_sorted(int arr[], int length){

    for (int i = 0; i < length; i++){
        if (arr[i] < arr[i-1]){
            return 0;
        }
    }
    return 1;
}
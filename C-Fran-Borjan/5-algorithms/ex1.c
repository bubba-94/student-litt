#include "../../use.h"

#define ARR_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

int main (){

    int num_arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // Check the full length of array. Use size_t when using sizeof
    for (size_t i = 0; i < ARR_LENGTH(num_arr); i++){
        if (num_arr[i] < num_arr[i-1]){
            printf("Stop at index [%ld] because %d is lower than %d\n",i , num_arr[i], num_arr[i-1]);
            break;
        }
    }
    printf("Array checked\n");
    return 0;
}
#include <stdio.h>

/*
    Write your own version of memcpy (type double)
*/

double copy(double to[], double from[], int length);

int main (){

    const int SIZE = 10;
    double a[SIZE];
    double new_arr[SIZE];


    printf("a: ");
    for (int i = 0; i < SIZE; i++){
        a[i] = i+1.0;
        printf("%.2f ", a[i]);
    }
    printf("\n");

    copy(new_arr, a, SIZE);

    printf("new_arr: ");
    for (int i = 0; i < SIZE; i ++){
        printf("%.2f ", new_arr[i]);
    }
    printf("\n");
    return 0;
}

double copy(double to[], double from[], int length){

    for (int i = 0; i < length; i++){
        to[i] = from[i]; 
    }

    return to[length];
}
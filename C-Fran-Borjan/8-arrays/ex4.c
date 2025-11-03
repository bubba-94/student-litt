#include <stdio.h>
#include <stdbool.h>

/*
    Write your own version of memcmp (type double)
*/

_Bool compare(double first[], double second[], int length);

void print_arr(double arr[], int length);

int main (){

    const int SIZE = 10;
    double a[SIZE];
    double b[SIZE];
    _Bool flag = false;

    // Populate array
    for (int i = 0; i < SIZE; i++){
        a[i] = i+1.0;
        b[i] = i+1.0;
    }

    // Make arrays NOT align
    b[0] = 2.5;

    flag = compare(a, b, SIZE);

    if (flag == true){

        print_arr(a, SIZE);
        print_arr(b, SIZE);

        printf("Both arrays align\n");
    }
    else {
        print_arr(a, SIZE);
        print_arr(b, SIZE);

        printf("Arrays do not align\n");
    }
}

_Bool compare(double first[], double second[], int length){

    for (int i = 0; i < length; i++){
        if (first[i] != second[i]){
            return false;
        }
    }

    return true;
}

void print_arr(double arr[], int length){
    for (int i = 0; i < length; i++){
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}
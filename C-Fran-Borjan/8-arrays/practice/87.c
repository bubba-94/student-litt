#include <stdio.h>

#define SIZE 10

void fill(double arr[], int first_index, int last_index, double value);
void print(double arr[]);

int main(){

    double a[SIZE];

    fill(a, 5,9,2.3);
    print(a);

    return 0;
}

void fill(double arr[], int first_index, int last_index, double value)
{
    for (int i = first_index; i < last_index; i++){
        arr[i] = value;
    }
}

void print(double arr[]){
    printf("Array: ");
    for (int i = 0; i < SIZE; i++){
        printf("%.1f ", arr[i]);
    }
    printf("\n");
}
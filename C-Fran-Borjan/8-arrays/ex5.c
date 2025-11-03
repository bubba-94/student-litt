#include <stdio.h>

#define SIZE 10

double sum (double a[], int size);
double sq_sum(double a[], int size);

int main (){
    double a[SIZE] = {2.5, 10.2, 9.2, 5.2, 21.3, 23.5, 2.4, 12.7, 3.87, 3.5};

    double square_sum = sq_sum(a, SIZE);
    double arr_sum = sum(a, SIZE);

    printf("THE ARRAY: ");
    for (int i = 0; i < SIZE; i ++){
        printf("%.1f ", a[i]);
    }

    printf("\narr_sum: %.4f\n", arr_sum);
    printf("square_sum: %.4f\n", square_sum);

    return 0;
}

double sum(double a[], int size){
    double sum = 0.0;

    for (int i = 0; i < size; i++){
        sum += a[i];
    }

    return sum;
}

double sq_sum(double a[], int size){
    double sq_sum = 0.0;

    for (int i = 0; i < size; i++){
        sq_sum += (a[i] * a[i]);
    }
    return sq_sum;
}
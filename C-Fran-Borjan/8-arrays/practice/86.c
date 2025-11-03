#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

double avg(double arr[]);

int main(){

    double a[SIZE];

    for (int i = 0; i < SIZE; i++){
        double value = i + .5;
        a[i] = value;
    }

    printf("Total avg: %.2f\n", avg(a));
    return 0;
}

double avg(double arr[]){
    static int index = 0;
    double total = 0.0;
    while (index < SIZE){
        total += arr[index];
        printf("Added value: %.1f\n", arr[index]);
        index++;
    }
    return total / SIZE; 
}
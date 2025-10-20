#include <stdio.h>

// Random
#include <stdlib.h>

// For seeding
#include <time.h>

int n = 4; 

int main(){

    int arr[n];

    // Seed numbers for variation


    // Populate array
    for (int i = 0; i < n; i++){
        arr[i] = rand() % 100+1;
    }

    float total_avg = 0.0f;

    for (int i = 0; i < n; i++){
        total_avg += arr[i];
        printf("Index %d = %d\n", i+1, arr[i]);
    }

    total_avg /= n;
    printf("Total average of array = %.2f\n", total_avg);
    return 0;
}

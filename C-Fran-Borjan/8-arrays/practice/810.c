#include <stdio.h>
#include <string.h>

#define OLD_ROWS 10
#define OLD_COLS 5

#define NEW_ROWS 5

// Adapt array first and then print an array with 5 rows
void print_out(int arr[][OLD_COLS]);

void adapt(int arr[][OLD_COLS]);

int main(){

    int a[OLD_ROWS][OLD_COLS];

    printf("__OLD ARRAY__\n");

    for (int i = 0; i < OLD_ROWS; i++){
        for(int j = 0; j < OLD_COLS; j++){
            // Populate array with value 1
            a[i][j] = 1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    adapt(a);

    print_out(a);

    return 0;
}

void adapt(int arr[][OLD_COLS]){
    // Include all bytes? 
    memcpy(arr, arr, NEW_COLS * OLD_COLS * sizeof(int));
}

void print_out(int arr[][OLD_COLS]){

    printf("__NEW ARRAY__\n");
    for (int i = 0; i < NEW_ROWS; i++){
        for(int j = 0; j < OLD_COLS; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

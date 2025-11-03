#include <stdio.h>
#include <string.h>

#define ROWS 4
#define COLS 4


_Bool check_magic(int arr[][COLS], int size){
    int target = 0;
    for (int j = 0; j < size; j++)
        target += arr[0][j];  // sum of first row

    // check rows
    for (int i = 0; i < size; i++){
        int row_sum = 0;
        for (int j = 0; j < size; j++)
            row_sum += arr[i][j];
        if (row_sum != target) return 0;
    }

    // check columns
    for (int j = 0; j < size; j++){
        int col_sum = 0;
        for (int i = 0; i < size; i++)
            col_sum += arr[i][j];
        if (col_sum != target) return 0;
    }

    // check diagonals
    int diag1 = 0, diag2 = 0;
    for (int i = 0; i < size; i++){
        diag1 += arr[i][i];
        diag2 += arr[i][size-1-i];
    }
    if (diag1 != target || diag2 != target) return 0;

    return 1;  // it is magical
}


int main() {

    int arr[ROWS][COLS] = {
        {16,  9,  2,  7},
        { 6,  3, 12, 13},
        {11, 14,  5,  4},
        { 1,  8, 15, 10}
    };

    _Bool flag = check_magic(arr, ROWS);

    if (flag){
        printf("Square is magical\n");
    }
    else printf("Square is NOT magical\n");

    return 0;
}
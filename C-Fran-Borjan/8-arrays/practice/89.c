#include <stdio.h>

#define ROWS 4
#define COLS 5

int main (){

    double a[ROWS][COLS];
    double first = 0.1;
    // Run once at index 3
    for (int i = 0; i < ROWS; i++){
        for(int j = 0; j < COLS; j++){

            // Access 3rd ROW
            if (i == 2)
            {
                 a[i][j] = first;
                first /= 10;
            }
            else 
            {
                a[i][j] = 0.0; 
            }
        } 
    }

    for (int i = 0; i < ROWS; i++){
        printf("ROW %d", i+1);
        for(int j = 0; j < COLS; j++){
            printf(" %.5f", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
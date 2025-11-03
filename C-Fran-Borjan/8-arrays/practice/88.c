#include <stdio.h>

#define SIZE 10

int main(){

    int a[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            a[i][j] = (i+1) * (j+1);
        }
    }

    for (int i = 0; i < SIZE; i++){
        for(int j = 0 ; j < SIZE; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
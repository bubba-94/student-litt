#include <stdio.h>

#define SIZE 100

int main(){

    int a[SIZE];
    int b[20];

    for (int i = 0; i < SIZE; i++){
        a[i] = i;
        for (int j = 0; j < 20; j++){
            b[j] = 0;
        }
    }

    for (int i = 0; i < SIZE; i++){
        if (i >= 50 && i <= 54){
            b[i-40] = a[i]; 
        }
        if (i >= 95 && i <= 99){
            b[i-90] = i;
        }
    }

    for (int i = 0; i < 20; i++){
        printf("b[%d]: %d\n", i, b[i]);
    }

    return 0;
}
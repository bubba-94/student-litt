#include <stdio.h>


/*
    Write a program to print out the multiplication table. n = amount of tables
*/

int n = 10;

int main(){
    printf("--------------MULTIPLICATION TABLE--------------\n");
    for (int i = 1; i <= n; i++){
        printf("Table: ");

        for (int j = 1; j <= n; j++){
            printf("%4i", j*i);
        }
        printf("\n");
    }
    
    return 0;
}
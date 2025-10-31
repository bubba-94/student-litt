#include "../../use.h"


/*
    Write a function that gets an integer from 1-10 as parameter.
    he function should print a multiplicationtable for the parameter.
    If you give the int 6 the function shall print 10 rows and it should print the first row as 1 6, second as 2 12.....
*/

void print_table(int);

int main (){
    

    int n = 6;
    print_table(n);

    return 0;
}

void print_table(int n){
    printf("---Table for int %d---\n", n);
    for (int i = 1; i <= 10; i++){
        printf("Index [%d] : %d", i, n * i);
        printf("\n");
    }
}
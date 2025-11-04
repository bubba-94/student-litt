#include <stdio.h>

int main(){

    int index = 0;

    // printts whatever you type until EOF
    while ((index = getchar()) != EOF){
        putchar(index);
    }

    return 0;
}
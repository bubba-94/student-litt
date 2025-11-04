#include <stdio.h>

#define SIZE 15
// Translate 1994-06-01 to 06/10/1994

int main (){

    char a[] = "1994-06-01";
    char b[SIZE];

    b[0] = a[5];
    b[1] = a[6];
    b[2] = a[7];
    b[3] = a[8];
    b[4] = a[9];
    b[5] = a[4];
    b[6] = a[0];
    b[7] = a[1];
    b[8] = a[2];
    b[9] = a[3];

    puts(b);

    return 0;

}
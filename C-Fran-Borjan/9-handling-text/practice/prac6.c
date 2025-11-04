#include <stdio.h>
#include <string.h>

#define SIZE 10

int main (){
    char s[] = "1994-06-01";
    char v[SIZE];

    strncpy(v, s+5, 2);
    v[2] = '/';
    strncpy(v+3, s+8, 2);
    v[6] = '/';
    strncpy(v+7, s+2, 2);
    v[SIZE - 1] = '\0';

    puts(v);
    
    return 0;
}
#include <stdio.h>
#include <string.h>

#define SIZE 11

void replace (char *to, const char *from, char old, char new);

int main (){

    char c1 = 'o';
    char c2 = '!';


    char arr[] = "workoholic";
    char dest[SIZE];

    puts("Before replace: ");
    puts(arr);
    replace(dest, arr, c1, c2);
    puts("After replace: ");
    puts(dest);


    return 0;
}

void replace (char *to, const char *from, char old, char new){

    for (int i = 0; i < SIZE -1; i++){
        to[i] = from[i];
        if (to[i] == old){
            to[i] = new;
        }
    }
}
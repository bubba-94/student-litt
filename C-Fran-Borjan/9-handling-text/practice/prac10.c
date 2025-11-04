#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_white(char *dest, char *src);

int main (){

    char arr[] = "Johan Modin";
    char new[15];

    remove_white(new,arr);

    puts(new);

    return 0;
}

void remove_white(char *dest, char *src) {
    int i = 0, j = 0;

    // Loop until \0
    while (src[i] != '\0') {
        if (src[i] != ' ') {
            dest[j] = src[i];
            j++;
        }
        i++;
    }
    // Add termiantion to new string
    dest[j] = '\0';
}
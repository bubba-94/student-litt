#include <string.h>
#include <stdio.h>

#define SIZE 7

void reversed(char *to, const char *from);

int main(void) {
    char src[] = "HelloH";
    char dest[SIZE];

    reversed(dest, src);

    puts(dest); // much simpler than printing in a loop

    return 0;
}

void reversed(char *to, const char *from) {
    int len = strlen(from);
    int i = 0;

    while (i < len){

        to[i] = from[len - 1 - i];
        i++;
    }
    
    to[i] = '\0';
}
#include <stdio.h>

int main (){

    int index = 0;
    int count = 0;
 
    while ((index = getchar()) != EOF){

        putchar(index);
        count++;

        // When enter is pressed, print the count.
        if (index == '\n'){
            // Minus \0 and \n
            count = count - 1;
            printf("%d char\n", count);

            // Reset count for new word
            count = 0;
        }
    }
}

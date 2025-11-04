#include <stdio.h>

void skip_line(void);

int main (){
    int index = 0;
    int rows = 0;

    printf("Press <Ctrl + D> to end inputs\n");
    while ((index = getchar()) != EOF){
        putchar(index);
        if (index == '\n'){
            // Increment rows when enter is pressed
            rows++;
        }
    }

    // Print rows
    printf("Number of rows = %d\n", rows);
}

void skip_line(void){
    int i; 

    while ((i = getchar()) != '\n' && i != EOF){
        ;
    }
}
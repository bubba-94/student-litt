#include <stdio.h>

/*
    Write a program that reads a certain amount of names from the keyboard and saves them inside a texfile called "persons.txt".
    In the file there should be one name per row, and if the file already exists the file should not be renewed. 
    New names should append / not overwrite the file.
*/


#define BUFFER 100

int main (){

    char buffer[BUFFER];

    // File to write to 
    char file[] = "persons.txt";

    FILE* persons_out = fopen(file, "a");

    if (persons_out == NULL){
        printf("Could not open %s\n", file);
    }

    printf("Enter a name: ");
        // Read from keyboard
    if(fgets(buffer, sizeof(buffer), stdin) != NULL){
        printf("Name printed: %s\n", buffer);
    }
        
    // Write to persons_out
    fputs(buffer, persons_out);

    return 0;
}
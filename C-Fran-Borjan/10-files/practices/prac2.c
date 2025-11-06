#include <stdio.h>
#include <string.h>


/*
    Write a program that reads a text file that includes a C program.
    The program shall ask for the files name.
    The program shall examine what rows in the file is commented (//)
    The program shall print how many % of the rows that are commented
    Tips: Std function strstr is useful
*/

#define BUFFER 256

int main (){

    char mode[] = "r";
    char file[] = "hello_world.txt";

    FILE* read = fopen(file, mode);
    if (!read){
        perror("Trouble opening file");
    }

    int index = 0;
    int comments = 0;
    int rows = 0;
    int row_of_comments[10] = {0,0,0,0,0,0,0,0,0,0};

    char buffer[BUFFER];
    while(fgets(buffer, sizeof(buffer), read) != NULL){
        rows++;
        // Compare strings inside??
        if (strstr(buffer, "//") != NULL){
            row_of_comments[comments++] = rows;
        }
        printf("%s", buffer);
    }
    printf("\n");

    float pct_of_comments = (comments + .0) / (rows + .0) * 100;


    if (rows == 0) {
        printf("ERROR: File is empty.\n");
        return 1;
    }

    // Print statistics
    printf("Amount of comments = %d\n", comments);
    printf("Amount of rows = %d\n", rows);
    printf("Percentage of comments / rows = %.1f%%\n", pct_of_comments);
    printf("Row of comments = ");
    for (int i = 0; i < comments; i++){
        if (row_of_comments[i] == 0){
            // Do nothing
        }
        else printf("%d ", row_of_comments[i]);
    }

    return 0;
}
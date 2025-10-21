#include <stdio.h>

/*
    Write a function that scans a character array for the character '-' and replaces it with '_'
*/

void convert_string(char*);

int main(){

    char value[] = "Hello-my-man";
    printf("Original value: %s\n", value);
    convert_string(value);
    return 0;
}

void convert_string(char *string){
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '-'){
            string[i] = '_';
        }
    }
    printf("Converted string: %s\n", string);
} 
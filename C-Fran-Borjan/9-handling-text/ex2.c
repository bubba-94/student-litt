#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/*
    A palindrom is a text that is the if you read it from back to front and front to back.
    Write a function that reads a row with a text and checks if the text is a palindrome.  
*/

#define ARR_LENGTH(arr) sizeof(arr) / sizeof(arr[0]) 

_Bool check_palindrome(char *value, int length);

int main (){

    char input[100];

    printf("Enter a string and check if it is a PALINDROME or not: ");
    fgets(input, sizeof(input), stdin);

    // Removes newline from Enter press
    input[strcspn(input, "\n")] = '\0';

    int length = strlen(input);

    if (check_palindrome(input, length)){
        printf("%s is a palindrome\n", input);
    }

    else {
        printf("%s is NOT a palindrome\n", input);
    }
    
    return 0;
}


_Bool check_palindrome(char *value, int length){


    for (int i = 0; i < length / 2 ; i++){
        if (value[i] != value[length - 1 - i]){
            return 0;
        }
    }
    return 1;
}
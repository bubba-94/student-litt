#include <string.h>
#include <stdio.h>
#include <ctype.h>

/*
    Write a program that read a line.
    The program should write how charachters the row is and first and last word.

*/

int calculate_chars(char *arr);
void print_last_word(char *arr, int length);
void print_first_word(char *arr, int length);
int calculate_words(char *arr);


int main (){

    char arr[] = "hello my little paddywan";
    int length = sizeof(arr);

    int amount_chars = calculate_chars(arr);
    int amount_words = calculate_words(arr);
    
    printf("Amount of words: %d\n", amount_words);
    printf("Amount of characters (without whitespace): %d\n", amount_chars);
    print_first_word(arr, length);
    print_last_word(arr, length);

    return 0;
}

int calculate_chars(char *arr)
{
    int whitespaces = 0;
    int count = 0;
    int index = 0;
    // Chars without whitespace
    while (arr[index] != '\0'){
        if (isspace(arr[index])){
            whitespaces++;
        }
        count++;
        index++;
    }
    return count - whitespaces;
}

void print_last_word(char *arr, int length)
{
    // Decrease from length to find last word
    int last_index = length - 1;
    int start = 0;
    // Skip \0 in the end

    for (int i = last_index; 0 < i; i--){
        if (isspace(arr[i])){
            // Find first index without whitespace 
            start = i+1;
            break;
        }
    }

    // Print last word from index to last index
    printf("Last word: ");
    for(int i = start; i < length - 1; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

void print_first_word(char *arr, int length)
{
    char first_word[length];
    int index = 0;

    // Find first whitespace and if only one word
    while (arr[index] != '\0'){

        // Add word to index
        first_word[index] = arr[index];
        // Find first space
        if (isspace(arr[index])){
            break;
        }
        index ++;
    }

    // Print first word
    printf("First word: %s\n", first_word);
}

int calculate_words(char *arr)
{
    int whitespaces = 0;

    // Start at 1 and then add whitespaces
    int words = 1;
    int index = 0;
    // Chars without whitespace
    while (arr[index] != '\0'){
        if (isspace(arr[index])){
            whitespaces++;
            words++;
        }
        index++;
    }
    return words;
}

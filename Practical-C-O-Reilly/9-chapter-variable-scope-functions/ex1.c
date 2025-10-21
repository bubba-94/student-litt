#include <stdio.h>
#include <string.h>

int count_words(const char*);

int main(){

    // Value to examine
    char string[] = "Hello from the other SIDE!";

    // Return value from function
    int rec_amount = count_words(string);

    printf("%s = %d words\n", string, rec_amount);

    return 0;
}

int count_words(const char *string){
    
    int count = 0; 

    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == ' '){
            count++;
        }
    }

    // +1 because count only evaluates the spaces in between words.
    return count + 1;
}
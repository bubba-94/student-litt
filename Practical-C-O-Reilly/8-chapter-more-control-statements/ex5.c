#include <stdio.h>

/*
    Write a program that reads a character and prints if the value is a consonant or vowel.
*/

int main(){

    char read[20]; 
    char input;
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    char consonants[] = {
        'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm',
        'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z'
    };

    int v_size = sizeof(vowels) / sizeof(vowels[0]);
    int c_size = sizeof(consonants) / sizeof(consonants[0]);

    while (1) {
        printf("Enter a character:");
        fgets(read, sizeof(read), stdin);
        sscanf(read, "%c", &input);
        for (int i = 0; i < v_size; i++){
            if (vowels[i] == input){
                printf("%c is a vowel\n",input);
                break;
            }
        }

        for (int i = 0; i < c_size; i++){
            if (consonants[i] == input){
                printf("%c is a consonant\n",input);
                break;
            }
        }
    }
    return 0;
}
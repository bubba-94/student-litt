#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

/*
    Check two string arrays if they are an anagram or not 
*/

_Bool check_anagram(char *, char*);

int main (){

    char arr[] = "hello";
    char arr2[] = "olehl";

    printf("---Words to evaluate---\n");
    printf("%s\n", arr);
    printf("%s\n", arr2);

    _Bool flag = check_anagram(arr, arr2);

    if (flag){
        printf("Is anagram!\n");
    }
    else printf("Is NOT anagram!\n");

    return 0;
}

_Bool check_anagram(char *arr, char *arr2){

    // length of arrays (should be the same)
    int length = strlen(arr);
    int length2= strlen(arr2);
    _Bool found;

    if (length != length2){
        printf("Lengths dont match, aborted");
        return 0;
    } 

    // Hold temp value so it doesnt get lost
    char temp;
    
    // Loop through arrays
    for (int i = 0; i < length; i++){
        _Bool found = 0;
        // Loop through second array
        for (int j = 0; j < length; j++){
            // When temp is found, put to the front to create the original word
            if (arr[i] == arr2[j]){

                found = 1;

                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;

            }
            if(!found){
                return 0;
            }
        }
    }
    printf("Arr two after check: ");
    puts(arr2);

    return 1;
}
#include <stdio.h>
#include <string.h>

/*
    Create a version of strcat
*/

char* my_strcat(char* arr1, const char *arr2);

int main (){

    char arr1[] = "Hello";
    char arr2[] = "World";

    strcat(arr1,arr2);

    printf("Using strcat: %s\n", arr1);

    // Should become HelloWorld World
    // When used after original strcat
    my_strcat(arr1, arr2);
    printf("Using my_strcat: %s\n", arr1);
    return 0;
}

char* my_strcat(char* dest, const char *src){
    int length = strlen(dest);
    while (*dest++){

        // Find last index before termination
        if (*dest == *dest + length){

            // Add new string
            *dest = *src;
            while(*src++){
                if(*src == '\0'){
                    return dest;
                }
            } 
        }
    }
}
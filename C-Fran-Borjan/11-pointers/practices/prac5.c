#include <stdio.h>

/*
    Create a version of strcat
*/

void my_strcat(char* arr1, const char *arr2);

int main (){

    char arr1[] = "Hello";
    char arr2[] = "World";

    my_strcat(arr1, arr2);

    printf("%s", arr1);
}

void my_strcat(char* arr1, const char *arr2){
    int count = 0;
    while (*arr1++ != '\0'){
        count++;
    }
    arr1 = arr1+count;

    while (*arr1++ = count + *arr2++){
        ;
    }

}
#include <string.h>
#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>

#define SIZE 10

/*
    Write a function that right shifts if arr2 > n, arr2 should include the right most indexes (last)
    Else arr2 should fill with whitespaces to == n
*/

// n is exclusive \0
void shift(char *arr, char* arr2, int n);

int main (){

    char arr[SIZE];
    
    // Testing arr > 10
    char arr2[] = "champignons";

    shift(arr,arr2,SIZE);

    printf("String after shift: %s\n", arr);

    return 0;
}

void shift(char *arr, char *arr2, int n) {
    int size_arr2 = strlen(arr2);

    if (size_arr2 > n - 1) {
        // Use the last n-1 characters of arr2
        int start = size_arr2 - (n - 1);
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr2[start + i];
        }
        arr[n - 1] = '\0';
    } 
    else {
        // Copy arr2 and pad with spaces
        int i = 0;
        for (; i < size_arr2; i++) {
            arr[i] = arr2[i];
        }
        for (; i < n - 1; i++) {
            arr[i] = ' ';
        }
        arr[n - 1] = '\0';
    }
}
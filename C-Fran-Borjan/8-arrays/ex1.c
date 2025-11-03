#include <stdio.h>

#define SIZE 15

_Bool check_dup(int a[]);
int pop_dup(int a[], int size);

int main() {

    int a[SIZE] = {1,2,3,4,5,6,8,8,9,10,3,12,13,14,15}; 
    int size = SIZE;

    _Bool flag = check_dup(a);

    if (flag) {
        printf("Duplicates found! Removing duplicates...\n");
        size = pop_dup(a, size);

        printf("Array after removing duplicates:\n");
        for (int i = 0; i < size; i++) {
            printf("%d ", a[i]);
        }
        printf("\n");
    }
    else {
        printf("No duplicates found, check cleared.\n");
    }

    return 0;
}

// Returns 1 if there is at least one duplicate
_Bool check_dup(int a[]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {  // j > i
            if (a[i] == a[j]) {
                return 1; // duplicate found
            }
        }
    }
    return 0; // all unique
}

// Removes all duplicates, returns new logical size
int pop_dup(int a[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (a[i] == a[j]) {
                // shift elements left
                for (int k = j; k < size - 1; k++) {
                    a[k] = a[k + 1];
                }
                size--; // reduce logical size
            } else {
                j++; // only increment if no shift
            }
        }
    }
    return size;
}
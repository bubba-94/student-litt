#include <stdio.h>
#include <string.h>

#define SIZE 6

int index_of(char *, char, int);

int main(){

    // Size include \0
    
    char c = 'o';
    char name[SIZE] = "Johan";
    int i = index_of(name, c, SIZE);

    if (i == -1) printf("Character not found\n");
    else printf("Character found at index %d\n", i);

    return 0;
}

int index_of(char* p, char c, int size){
    for(int i = size - 1; i > 0; i--){
        if(p[i] == c){
            return i;
        }
    }
    return -1;
}
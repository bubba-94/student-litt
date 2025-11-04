#include <stdio.h>

void skip_line(void);

int main (){

    int anwser;
    do {
        printf("Write j:");
        anwser = getchar();
        skip_line();
    } while(anwser == 'j');
    return 0;
}

void skip_line(void){
    int i; 

    while ((i = getchar()) != '\n' && i != EOF){
        ;
    }
}
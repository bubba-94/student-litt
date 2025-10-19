#include <stdio.h>

int main (){
    
    char grade[] = {'A','B','C','D','F'};
    char ext[] = {'+', '-'};
    int right;

    printf("Enter pct:");
    scanf("%d", &right);

    // F
    if (right < 60) printf("%c\n", grade[4]);

    // D
    if (right > 60 && right <= 63){
        printf("%c%c\n", grade[3], ext[1]);
    }
    else if (right > 67 && right <= 70){
        printf("%c%c\n", grade[3], ext[0]);
    }
    else if (right > 63 && right <= 67)printf("%c\n", grade[3]);
    
    // C
    if (right > 70 && right <= 70){
        printf("%c%c\n", grade[2], ext[1]);
    }
    else if (right > 77 && right <= 80){
        printf("%c%c\n", grade[2], ext[0]);
    }
    else if (right > 73 && right <= 77)printf("%c\n", grade[2]);
    
    // B
    if (right > 80 && right <= 83){
        printf("%c%c\n", grade[1], ext[1]);
    }
    else if (right > 87 && right <= 90){
        printf("%c%c\n", grade[1], ext[0]);
    }
    else if (right > 83 && right <= 87)printf("%c\n", grade[1]);
    // A
    if (right > 90 && right <= 93){
        printf("%c%c\n", grade[0], ext[1]);
    }
    else if (right > 97 && right <= 100){
        printf("%c%c\n", grade[0], ext[0]);
    }
    else if (right > 93 && right <= 97)printf("%c\n", grade[0]);

    return 0;
}
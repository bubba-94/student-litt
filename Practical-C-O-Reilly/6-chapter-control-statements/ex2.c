#include <stdio.h>

int main (){
    
    
    char grade[] = {'A','B','C','D','F'};
    int right;

    printf("Enter pct:");
    scanf("%d", &right);
    
    if (right < 60) printf("%c\n", grade[4]);
    else if (right > 60 && right <= 70) printf("%c\n", grade[3]);
    else if (right > 70 && right <= 80) printf("%c\n", grade[2]);
    else if (right > 80 && right <= 90) printf("%c\n", grade[1]);
    else if (right > 90 && right <= 100) printf("%c\n", grade[0]);

    return 0;
}
#include <stdio.h>

int main (){
    float x = 5.8;
    
    float *q1 = &x, *q2 = NULL;
    
    printf("Value of x: %.1f\n", x);
    printf("Value of q1: %p\n", q1);
    printf("Value of q2: %p\n", q2);
    return 0;
}
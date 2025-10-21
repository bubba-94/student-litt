#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Write a macro is_digit that returns TRUE if its arguments is a decimal digit.
*/

#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')

int main(){

    char a = '5';
    char b = 'x';
    if (IS_DIGIT(a)) printf("%c is a digit\n", a);
    else printf("%c is NOT a digit\n", a);
    if (IS_DIGIT(b)) printf("%c is a digit\n", b);
    else printf("%c is NOT a digit\n", b);

    return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
    Write a second macro is_hex that return TRUE if its argument is a a hex digit (0-9 or A-F, a-f).
    The second macro should reference the first
*/

#define IS_DIGIT(x) ((x) >= '0' && (x) <= '9')

#define IS_HEX(x) ( IS_DIGIT(x) || ((x) >= 'A' && (x) <= 'F') || ((x) >= 'a' && (x) <= 'f') )

int main(){

    char a = '5';
    char b = 'f';
    char c = 'U';
    if (IS_HEX(a)) printf("%c is a hex\n", a);
    else printf("%c is NOT a hex\n", a);
    if (IS_HEX(b)) printf("%c is a hex\n", b);
    else printf("%c is NOT a hex\n", b);
    if (IS_HEX(c)) printf("%c is a hex\n", c);
    else printf("%c is NOT a hex\n", c);

    return 0;
}
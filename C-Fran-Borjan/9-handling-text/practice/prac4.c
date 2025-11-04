#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c = 'A';

    printf("c = %c\n\n", c);

    printf("isalpha:  %d\n", isalpha(c));
    printf("islower:  %d\n", islower(c));
    printf("isupper:  %d\n", isupper(c));
    printf("isdigit:  %d\n", isdigit(c));
    printf("isxdigit: %d\n", isxdigit(c));
    printf("isalnum:  %d\n", isalnum(c));
    printf("isspace:  %d\n", isspace(c));
    printf("isblank:  %d\n", isblank(c));
    printf("iscntrl:  %d\n", iscntrl(c));
    printf("isprint:  %d\n", isprint(c));
    printf("isgraph:  %d\n", isgraph(c));
    printf("ispunct:  %d\n", ispunct(c));

    // For toupper/tolower, show what they return:
    printf("toupper:  %c\n", toupper(c));
    printf("tolower:  %c\n", tolower(c));

    return 0;
}
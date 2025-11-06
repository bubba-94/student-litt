#include <string.h>
#include <ctype.h>
#include <stdio.h>

void fskip_line(FILE *file);

int main (){



    return 0;
}

void fskip_line(FILE *file) {
    int ch;

    // Keep reading characters until we find a newline or reach end-of-file
    ch = fgetc(file);
    while (ch != '\n' && ch != EOF) {
        ch = fgetc(file);
    }
}
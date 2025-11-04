#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
    c = tolower((unsigned char)c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

void sort_p_lang(char *dest, const char *src) {
    int i = 0; // index for src
    int j = 0; // index for dest

    while (src[i] != '\0') {
        dest[j++] = src[i];

        // Check for pattern: vowel + 'p' + same vowel (case-insensitive)
        if (is_vowel(src[i]) &&
            src[i+1] == 'p' &&
            tolower((unsigned char)src[i+2]) == tolower((unsigned char)src[i])) {
            i += 2;  // skip 'p' and repeated vowel
        }

        i++;
    }

    dest[j] = '\0';  // terminate decoded string
}

int main(void) {
    char src[] = "Apallapa kapan C";
    char dest[100];

    sort_p_lang(dest, src);

    printf("Sorted to human language: %s\n", dest);
    return 0;
}
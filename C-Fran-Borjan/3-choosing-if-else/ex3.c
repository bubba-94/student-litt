#include "../../use.h"

int main()
{
    char read[20];
    long int zip = 0;

    printf("Enter zip code: xxxxx");

    fgets(read, sizeof(read), stdin);
    sscanf(read, "%ld", &zip);

    if ((zip / 1000 >= 20 && zip / 1000 <= 62) || zip / 1000 == 65 || zip / 1000 == 66) printf("Götaland\n");
    else if (zip / 1000 >= 80) printf("Norrland\n");
    else printf("Svealand\n");
    return 0;
}
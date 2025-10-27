#include "../../use.h"

int main()
{

    char read[10];
    int minutes = 0;

    printf("How many minutes are you going to use? int\n");

    fgets(read, sizeof(read), stdin);
    sscanf(read, "%d", &minutes);

    if (minutes > 0 && minutes <= 33) printf("Use Cash level\n");
    else if (minutes > 33 && minutes <= 66) printf("Use Normal level\n");
    else if (minutes > 66) printf("Use Plus level\n");

    return 0;
}
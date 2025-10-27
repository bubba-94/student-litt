#include "../../use.h"

int main()
{

    char read[10];
    const float PI = 3.14;
    int x = 0; 

    printf("What is the radius of the circle int\n");
    fgets(read, sizeof(read), stdin);
    sscanf(read, "%d", &x);

    if (x <= 0) printf("Error, radius cannot be less than 0");


    float area = 4 * PI * sqrt(x);
    float volume = (4 * PI * cbrt(x)) / 3;
    printf("Radius: %d\n", x);
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
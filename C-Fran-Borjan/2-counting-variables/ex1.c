#include "../../use.h"

int main (){

    const float PI = 3.14;
    int x = 10; 

    float area = 4 * PI * sqrt(x);
    float volume = (4 * PI * cbrt(x)) / 3;


    printf("Radius: %d\n", x);
    printf("Area: %.2f\n", area);
    printf("Volume: %.2f\n", volume);

    return 0;
}
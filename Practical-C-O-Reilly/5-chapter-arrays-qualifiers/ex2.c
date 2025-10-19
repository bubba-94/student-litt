#include <stdio.h>
#include <math.h>


int main (){

    const float PI = 3.14;
    int radius = 5;
    float calc_sphere =  ((4/3) * (radius * radius * radius)) * PI;

    printf("Radius: %d\nSpheric volume: %.2f", radius, calc_sphere);

    return 0;
}
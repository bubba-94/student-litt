#include "../../use.h"

/*
    Conversion from Fahrenheit to Celsius
*/

int main (){

    int fahrenheit = 52;

    float C = (fahrenheit - 32) * 5/9;

    printf("Converting %d F to C: %.2f\n", fahrenheit, C);    

    return 0; 
}
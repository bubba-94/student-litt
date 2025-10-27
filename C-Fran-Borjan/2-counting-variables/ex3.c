#include "../../use.h"

int main (){

    int gallon = 0;
    
    printf("Enter gallons: "); 
    scanf("%d\n", &gallon);
    
    float liter = gallon * 3.785;

    printf("%d gallons converted to liters = %.2f\n", gallon, liter);

    return 0;
}
#include <stdio.h>



int main (){
    char read[100];    
    int minutes; 
    int hours;

    printf("Enter hours and min: ");
    fgets(read, sizeof(read), stdin);
    sscanf(read, "%i %i", &hours, &minutes);

    int conv_hours = hours * 60;
    
    int total = conv_hours + minutes;

    printf("Total minutes converted: %i\n", total);
    
    return 0;
}
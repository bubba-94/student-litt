#include "../../use.h"


int main (){

    char read[50];
    int x[2];
    int y[2];
    float distance = 0.0;

    printf("Enter first coordinates x and y: ");
    fgets(read, sizeof(read), stdin);
    sscanf(read, "%d %d", &x[0], &y[0]);


    printf("Enter second coordinates x and y: ");
    fgets(read, sizeof(read), stdin);
    sscanf(read, "%d %d", &x[1], &y[1]);

    distance = sqrt(pow(x[0] - x[1], 2) + pow(y[0] - y[1], 2));

    printf("Total distance is: %.2f\n", distance);

    return 0;
}
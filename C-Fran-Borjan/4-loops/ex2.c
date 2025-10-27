#include "../../use.h"


int main(){

    const int rows = 12;
    int index = 1;

    for (index = 1; index <= rows; index++){
        double square = pow(index,2);
        double cube = pow(index, 3);
        printf("Index: %d | Square = %.2f | Cube = %.2f\n", index, square, cube);
    }

    return 0;
}
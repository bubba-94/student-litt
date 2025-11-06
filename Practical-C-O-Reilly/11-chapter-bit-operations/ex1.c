#include "../use.h"

/*
    Write a set of parameterized macros, clear_bit and test_bit to go with the set_bit operation defined in the book.
    Write a main program that can test this logic.

    Macro from exercise below
*/

#define X_SIZE 8 // Size of array in X dir
#define Y_SIZE 8 // Size of array in Y dir

char graphics[X_SIZE / 8][Y_SIZE];

#define SET_BITx(x,y) graphics[(x) / 8][y] |= (0x80 >> ((x) % 8)) // Left most to right most 7 -> 1
#define SET_BITy(x,y) graphics[(x) / 8][y] |= (0x01 << ((x) % 8)) // Right most to left most 7 <- 1


#define CLEAR_BIT(x) (x) ~= graphics[(x) / 8][y];
 // #define TEST_BIT(x) 


void print_graphics();

int main(){

    int location;

    for (location = 0; location < X_SIZE; location++){
        SET_BITx(location, location);
        SET_BITy(location, location);
    }
    print_graphics();

    return 0;
}

void print_graphics(){
    int x = 0;
    int y = 0;
    unsigned int bit = 0;

    for (y = 0;y < Y_SIZE; y++){
        for(x = 0; x < X_SIZE / 8; x++){
            for (bit = 0x80; bit > 0; bit = (bit >> 1)){
                if ((graphics[x][y] & bit) != 0){
                    printf("X");
                }
                else printf(".");

            }
        }
        printf("\n");
    }
}
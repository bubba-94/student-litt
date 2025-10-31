#include "../../use.h"

/*
    Write a function that counts a integer sign.
    As a result the function should retun 1 if the integer is bigger than 0,
    0 if the integer is equal to 0 and -1 if the integer is lower than 0
*/

int check_int(int);

int main (){

    printf("-5 returns %d\n",check_int(-5));
    printf("10 returns %d\n", check_int(10));
    printf("0 returns %d\n", check_int(0));

    return 0;
}

int check_int(int value){
    if (value >= 0){
        return 0;
    }
    else if (value < 0){
        return -1;
    }
    return 0;
}
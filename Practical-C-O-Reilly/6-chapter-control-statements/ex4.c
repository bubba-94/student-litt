#include <stdio.h>

/*
    A leap year is any year divisible by 4, unless the year is divisible by 100, but not 400.
    Write a program to tell if a year is a leap year
*/

int main (){

    // Leap year try
    int year = 2008;


    // If year divisible by 400 = true || else not / 100 != 0 or  equals / 4 == 0 return true
    if ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0)){
        printf("Year %d is a leap year", year);
    }
    else printf("Year %d is NOT a leap year", year);

    return 0;
}
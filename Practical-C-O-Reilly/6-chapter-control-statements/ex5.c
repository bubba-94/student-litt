#include <stdio.h>


/*
    Write a program that, given the number of hours an employee worked and the hourly wage,
    computes the employee's weekly pay. Count any hours over 40 as overtime at time and a half
*/

int main (){

    int total_hours = 55;
    int wage = 12;
    int weeklypay = 40 * wage;
    float overtime = total_hours - 40;
    float total = (overtime * wage * 1.5) + weeklypay;

    printf("Hours worked: %i\n", total_hours);
    printf("Pay without overtime: %i\n", weeklypay);
    printf("Total net with overtime: %.2f\n", total);




    return 0;
}
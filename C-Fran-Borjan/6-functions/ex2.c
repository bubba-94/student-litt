#include "../../use.h"

/*
    Write a function that counts what an item costs, including taxes.
    The function should get the parameters as price of item and including taxes.
    Return the response
*/

double item_cost(int, double);

int main (){
    
    int price = 24;
    double tax = 0.07;

    double total = item_cost(price,tax);

    printf("Total cost with taxes = %.2f\n", total);

    return 0;
}

double item_cost(int price, double taxes){
    double total = 0.0f;
    total = price + (price * taxes);
    return total;
}
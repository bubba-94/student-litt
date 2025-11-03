#include <stdio.h>

#define SIZE 100

int main(){
    double price[SIZE];
    int n = 0;

    while (n < 100){
        printf("Price per min for card nr %d: ", n+1);
        if (scanf("%lf", &price[n]) != 1){
            break;
        }
        n++;
    }

    int cheapest = 0; 

    for (int i = 1; i < n; i++){
        if (price[i] < cheapest){
            cheapest = i;
        }
    }
    
    printf("\nCard [%d] is the cheapest.\n", cheapest);
    printf("Cost: %4.2f kr/min", price[cheapest]);

    return 0;
}
#include "../../use.h"


int main(){

    int days = 0;
    float wage = 0.1f;
    float total_pay = 0.0f;
    int total = 10000000;

    while (1){
        
        // Break when wage equals or is higher than 10000000
        if (wage >= total){
            break;
        }

        // Assigned current wage to count the total_pay
        total_pay += wage;

        // Double the wage each day 
        wage = wage * 2;

        days++;
        printf("Total pay right now: %.2f\n", total_pay); 
    }

    
    printf ("Days counted until you reach 10000000 is %d days!\n", days);
    return 0;
}
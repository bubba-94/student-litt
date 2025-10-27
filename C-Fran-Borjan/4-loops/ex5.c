#include "../../use.h"

int main(){


    // Year from statistics
    int year = 2015; 
    double inhabitants = 22000;

    // Percentage born and deceased each year 
    double born = 0.007;
    double deceased = 0.006;

    // 25 immigrated per year
    int emigrated = 25;

    int estimated = 0;
    
    printf("Print the year for estimated amount of inhabitants: ");
    scanf("%d",&estimated);

    double new_total = inhabitants;

    for (int i = 0; i < estimated - year; i++){
        printf("Year: %d = %.2f\n", year + i, new_total);
        new_total += (new_total * (born - deceased)) - emigrated;
    }
    
    printf("New estimation for year %d is: %.2f\n", estimated, new_total);
    return 0;
}
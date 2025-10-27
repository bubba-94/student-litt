#include "../../use.h"

int main()
{
    int gender = 0;
    long long int pers_nmr = 0;
    
    printf("Boy or girl? 0 or 1\n"); 
    scanf("%d", &gender);

    printf("Person nmr: ");
    scanf("%lld", &pers_nmr);

    // Locate second last number 
    pers_nmr = pers_nmr / 10;

    if (pers_nmr % 2 == 0 && gender == 1){
        printf("Girl is correct\n");
    }
    else if (pers_nmr % 2 != 0 && gender == 0){
        printf("Boy is correct\n");
    }
    else printf("It doesnt add upp\n");

    return 0;
}
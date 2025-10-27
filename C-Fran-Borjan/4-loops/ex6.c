#include "../../use.h"


int main(){

    double limit = 0.000002;

    int n = 1;

    for (int i = 0; i < n; i++){

        double sum = 1.0 / n;
        printf("[%d] = %.6f\n", i, sum);
        if (sum < limit){
            break;
        } 
        n++;
    } 



    return 0;
}
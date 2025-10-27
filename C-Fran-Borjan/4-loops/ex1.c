#include "../../use.h"


int main(){

    char read[10];

    int num[10];
    int lowest = 0;
    int highest = 0;

    for (int i = 0; i < 10; i++){

        printf("New int: \n");
        if (fgets(read, sizeof(read), stdin) == NULL) { 
            // EOF or input error
            break;
        }
        sscanf(read, "%d", &num[i]);
    }

    // Lowest will stay 0 if no negative value is put.

    for (int i = 0; i < 10; i++){
        if (num[i] < lowest){
            lowest = num[i];
        }
        if (num[i] > highest){
            highest = num[i];
        }
    }

    printf("Highest num in array: %d\n", highest);
    printf("Lowest num in array: %d\n", lowest);


    return 0;
}
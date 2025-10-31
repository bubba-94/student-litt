#include "ex1lib.h"

int main(){

    int hours = obs_hours();
    int minutes = obs_minutes();
    float temp = current_temp();

    if (observation(hours, minutes, temp) != 1){
        printf("Observation no good!\n");
    }
    else{
        printf("Current temp: %.2f\n", temp);
        printf("Timed at: %d.%d\n", hours, minutes);
    }



    return 0;
}
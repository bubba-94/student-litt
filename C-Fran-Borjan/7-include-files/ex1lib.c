#include "ex1lib.h"

float current_temp(){
    float temp = 15; 
    return temp;
}

int obs_hours(){
    int hours = 22;
    return hours;
}

int obs_minutes(){
    int minutes = 45;
    return minutes;
}

int observation (int hours, int minutes, float temp){

    if(hours >= 0 && hours <= 23 && minutes >= 0 && minutes <= 59 && temp >= -45 && temp <= 45) return 1;
    else return 0;
}
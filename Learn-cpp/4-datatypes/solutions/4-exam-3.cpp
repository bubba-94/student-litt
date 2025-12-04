#include <iostream>

/*
Write a short program to simulate a ball being dropped off of a tower. 

To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is not moving to start). 
Have the program output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. 
The ball should not go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. 

The function can calculate how far the ball has fallen after x seconds using the following formula: 

Formula:
distance fallen = gravity_constant * x_seconds^2 / 2

*/


int readInt(){
    int x;
    std::cout << "Enter height: ";
    std::cin >> x;
    return x;
}

double calculateHeight(const double grav, int seconds, int towerHeigth){
    double distanceFallen = grav * (seconds * seconds);
    towerHeigth = towerHeigth - distanceFallen;

    return towerHeigth;
}

void print(double calculatedHeight, int secondsPassed){
    std::cout << "After " << secondsPassed << " seconds the ball is at " << calculatedHeight << " meters" << "\n";
}



int main (){

    const double gravity = 9.8;
    int towerHeight = readInt(); 


    print(calculateHeight(gravity, 4, towerHeight), 4);

    return 0;
}
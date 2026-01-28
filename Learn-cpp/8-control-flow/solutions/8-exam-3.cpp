#include <iostream>
#include "Random.h"


/*
    Implement a game of Hi-Lo. First, your program should pick a random integer between 1 and 100. 
    The user is given 7 tries to guess the number.

    If the user does not guess the correct number, the program should tell them whether they guessed too high or too low. 
    If the user guesses the right number, the program should tell them they won. 
    If they run out of guesses, the program should tell them they lost, and what the correct number is. 
    At the end of the game, the user should be asked if they want to play again. 
    If the user doesn’t enter ‘y’ or ‘n’, ask them again.
*/

constexpr int MAX_TRIES = 7;
constexpr int MIN = 1;
constexpr int MAX = 100;

int main (){

    int anwser = Random::get(MIN, MAX);
    int reply{};
    int tries = 0;
    bool menu = true;

    while (menu){
        if (tries == MAX_TRIES){
            std::cout << "Max tries reached\n";
            std::cout << "The right anwser was: " << anwser << "\n";
            menu = false;
            return 0;
        }
        std::cout << "Guess the random int: ";
        std::cin >> reply;

        if (reply < anwser){
            menu = true;
            std::cout << reply << " is lower than the anwser\n";
        }
        else if (reply > anwser){
            menu = true;
            std::cout << reply << " is higher than the anwser\n";
        }
        else{
            menu = false;
            std::cout << "You won!\n";
            std::cout << reply << " = " << anwser << "\n";
        }
        tries++;
    }

    std::cout << "Game finished\n";

    return 0;
}
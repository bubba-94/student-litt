#include <iostream>

/*
    Fizz Buzz is a simple math game used to teach children about divisibility. 
    It is also sometimes used as an interview question to assess basic programming skills.

    The rules of the game are simple: 
    - Starting at 1, and counting upward, 
    replace any number divisible only by three with the word “fizz”, 
    any number only divisible by five with the word “buzz”, 
    and any number divisible by both 3 and 5 with the word “fizzbuzz”.

    Implement this game inside a function named fizzbuzz() that takes a parameter determining what number to count up to. 
    Use a for-loop and a single if-else chain (meaning you can use as many else-if as you like).

    The output of fizzbuzz(15) should match the following:
*/

void fizzbuzz (int until){
    for (int i = 0; i <= until; ++i){

        if ((i % 5 == 0) && (i % 3 == 0)){
            std::cout << "fizzbuzz";
        }
        else if(i % 3 == 0){
            std::cout << "fizz";
        }
        else if(i % 5 == 0){
            std::cout << "buzz";
        }
        else std::cout << i;

        std::cout << "\n";
    }
}

int main (int argc, char *argv[]){

    int amount = std::atoi(argv[1]);

    fizzbuzz(amount);

    return 0;
}
#include <iostream>
#include <string>
#include <string_view>


/*
Write a program that asks for the name and age of two people, then prints which person is older.

Here is the sample output from one run of the program:

    Enter the name of person #1: John Bacon
    Enter the age of John Bacon: 37
    Enter the name of person #2: David Jenkins
    Enter the age of David Jenkins: 44
    David Jenkins (age 44) is older than John Bacon (age 37).
*/

int main (){

    std::string name1;
    std::string name2;
    std::string_view sv1 {name1};
    std::string_view sv2 {name2};
    int age1 {};
    int age2 {};
    
    std::cout << "Enter name of first person: ";
    std::getline(std::cin >> std::ws, name1);
    sv1 = name1;
    std::cout << "Enter name of second person: ";
    std::getline(std::cin >> std::ws, name2);
    sv2 = name2;
    
    std::cout << "Enter age of " << sv1 << ": ";
    std::cin >> age1; 
    std::cout << "Enter age of " << sv2 << ": ";
    std::cin >> age2;


    if (age1 == age2){
        std::cout << sv1 << " and " << sv2 << " are the same age.\n";
    }
    else if (age1 < age2){
        std::cout << sv2 << " is older then " << sv1;
    }
    else std::cout << sv1 << " is older then " << sv2;

    return 0;
}
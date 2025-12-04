#include <iostream>
#include <string>


/*
    Write a program that asks the user to enter their full name and their age. 
    As output, tell the user the sum of their age and the number of characters in their name 
    (use the std::string::length() member function to get the length of the string). 
    For simplicity, count any spaces in the name as a character.
*/


int main (){

    std::string name {};
    int age {};

    std::cout << "Enter full name <Johan Doe>:";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter age: ";
    std::cin >> age; 

    int total = age + static_cast<int>(name.length() - 1);

    std::cout   << "Hello "<< name << ", you are " << age 
                << " years old" 
                << "\nYour name contains: " << name.length() - 1 << " characters\n"
                << "Add age and length of name together: " << total << "\n";
    return 0;
}
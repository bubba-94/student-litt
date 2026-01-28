#include <iostream>

/*
    Write a program that prints out the letters a through z along with their ASCII codes. 
    Use a loop variable of type char.
*/

int main (){
    char loop = 'a';


    while (loop <= 'z')
    {
        std::cout << "Letter: " << loop << " | ASCII: " << int(loop)  << "\n"; 
        ++loop;
    }

    return 0;
}
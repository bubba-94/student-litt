#include <iostream>
/*
Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member.

Write a function to read in a Fraction from the user, and use it to read-in two fraction objects. 
Write another function to multiply two Fractions together and return the result as a Fraction (you don’t need to reduce the fraction). 
Write another function that prints a fraction.

Your program’s output should match the following:

Enter a value for the numerator: 1
Enter a value for the denominator: 2

Enter a value for the numerator: 3
Enter a value for the denominator: 4

Your fractions multiplied together: 3/8
When multiplying two fractions together, the resulting numerator is the product of the two numerators, and the resulting denominator is the product of the two denominators.
*/

struct Fraction {
    int numerator;
    int denominator;
};

void readFraction(Fraction& fraction){
    std::cout << "Enter a value for the numerator: ";
    std::cin >> fraction.numerator;

    std::cout << "Enter a value for the denominator: ";
    std::cin >> fraction.denominator;

    std::cout << "\n";
}

Fraction multiply(const Fraction& f1, const Fraction& f2){
    Fraction result{};
    result.numerator = f1.numerator * f2.numerator;
    result.denominator = f1.denominator * f2.denominator;
    return result;
}

void printFraction(const Fraction& fraction){
    std::cout << "Fractions multiplied together: "
              << fraction.numerator << "/"
              << fraction.denominator << "\n";
}

int main (){

    Fraction f1{};
    Fraction f2{};

    readFraction(f1);
    readFraction(f2);

    Fraction result = multiply(f1,f2);

    printFraction(result);

    return 0;
}
#include <iostream>

class Fraction{
public:
    explicit Fraction(int x = 0, int y = 1): numerator{x}, denominator{y}{}

    Fraction multiply(const Fraction& ref){
        return Fraction{ numerator * ref.numerator, denominator * ref.denominator };
    }

    void setFraction(){
        std::cout << "Enter a value for numerator: ";
        std::cin >> numerator;
        std::cout << "Enter a value for denominator: ";
        std::cin >> denominator;
        if (denominator <= 0 ){
            denominator = 1;
        }
        std::cout << '\n';

        print();
    }

    void print(){
        std::cout << numerator << "/" << denominator << "\n";
    }

private:
    int numerator{};
    int denominator{1};
};

int main()
{
    Fraction f1{};
    f1.setFraction();

    Fraction f2{};
    f2.setFraction();

    std::cout << "Your fractions multiplied together: ";

    Fraction multiplied = f1.multiply(f2);

    multiplied.print();

    return 0;
}
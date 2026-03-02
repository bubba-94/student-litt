#include <iostream>

int main (){
    int x {137};
    int y {1337};
    int *ptr {&x};

    std::cout << x << "\n";     // Value of x
    std::cout << &x << "\n";    // Adderss of x
    std::cout << ptr << "\n";   // Address of x
    *ptr += 1;                  // Increment value of x
    std::cout << *ptr << "\n";  // Value of x
    std::cout << ptr << "\n";   // Address of x
    ptr = &y;                   // Point to address of y
    std::cout << ptr << "\n";   // Address of y


    short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54

	short* ptr{ &value };

	std::cout << &value << '\n'; // 0012FF60
	std::cout << value << '\n';  // 7
	std::cout << ptr << '\n';    // 0012FF60
	std::cout << *ptr << '\n';   // 7
	std::cout << '\n';

	*ptr = 9;   

	std::cout << &value << '\n'; // 0012FF60
	std::cout << value << '\n';  // 9
	std::cout << ptr << '\n';    // 012FF60
	std::cout << *ptr << '\n';   // 9
	std::cout << '\n';

	ptr = &otherValue; 

	std::cout << &otherValue << '\n'; // 0012FF60
	std::cout << otherValue << '\n';  // 3
	std::cout << ptr << '\n';         // 0012FF60
	std::cout << *ptr << '\n';        // 3
	std::cout << '\n';

	std::cout << sizeof(ptr) << '\n'; // 4
	std::cout << sizeof(*ptr) << '\n'; // 4

    return 0;
}
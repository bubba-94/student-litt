#include "Triad.hpp"
#include <iostream>
#include <string>

int main()
{
	Triad<int, int, int> t1{ 1, 2, 3 };
	t1.print();
	std::cout << '\n';
	std::cout << t1.first() << '\n';
    std::cout << t1.second() << '\n';
    std::cout << t1.third() << '\n';


	using namespace std::literals::string_literals;
	const Triad t2{ 1, 2.3, "Hello"s };
	t2.print();
	std::cout << '\n';
    std::cout << t2.first() << '\n';
    std::cout << t2.second() << '\n';
    std::cout << t2.third() << '\n';

	return 0;
}
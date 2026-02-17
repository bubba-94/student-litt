#include <iostream>

// write your mult function template here

template <typename T>
T mult(T x, int n){
    return x * n;
}

int main()
{
	std::cout << mult(2, 3) << '\n';
	std::cout << mult(1.2, 3) << '\n';

	return 0;
}
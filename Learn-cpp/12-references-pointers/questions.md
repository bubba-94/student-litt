# References and pointers


## Questions

### 12.3.1 Determine what values the following program prints by yourself (do not compile the program).
```cpp

#include <iostream>

int main()
{
    int x{ 1 };
    int& ref{ x };

    std::cout << x << ref << '\n';

    int y{ 2 };
    ref = y;
    y = 3;

    std::cout << x << ref << '\n';

    x = 4;

    std::cout << x << ref << '\n';

    return 0;
}
```

- 11, 22, 44. 

### 12.7.1 What values does this program print? Assume a short is 2 bytes, and a 32-bit machine.

```cpp
#include <iostream>

int main {

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
	std::cout << sizeof(*ptr) << '\n'; // 2

    return 0;
}

```

### 12.7.2 What’s wrong with this snippet of code?

```cpp
    int v1{ 45 };
    int* ptr{ &v1 }; // initialize ptr with address of v1

    int v2 { 78 };
    *ptr = &v2;     // assign ptr to address of v2
```

- Dereferencing the pointer and assigning an address instead of the value and wont compile, but will compile if dereferencer is removed. ptr = &v2;.

### 12.8.1a Can we determine whether a pointer is a null pointer or not? If so, how? 

- A pointer can convet into a boolean literal when it is evaluated, so if (ptr) can evaluate to either true or false

### 12.8.1b Can we determine whether a non-null pointer is valid or dangling? If so, how?

- This will cause UB but dereferencing a dangling pointer will either crash application or show invalid results.

### 12.8.2 For each subitem, answer whether the action described will result in behavior that is: predictable, undefined, or possibly undefined. If the answer is “possibly undefined”, clarify when.

Assume that any objects mentioned are of a type that the pointer can point to.

- a. Assigning the address of an object to a non-const pointer
	- Predictable

- b. Assigning nullptr to a pointer
	- Predictable

- c. Dereferencing a pointer to a valid object

- d. Dereferencing a dangling pointer
	- Undefined (might show the right result, but can be undefined) 

- e. Dereferencing a null pointer
	- Undefined

- f. Dereferencing a non-null pointer
	- Possibly undefined since a non null value doesnt ensure that the value pointed to is a valid object.

### 12.8.3 Why should we set pointers that aren't pointing to a valid object to `nullptr`?

- If a pointer is left dangling, it might point to another invalid object and cause UB and a broken application. 
So by pointing to nullptr instead we can test if a ptr is null so that we can easily detect dereferencing possibilities.

### 12.x.1 For each of the following expressions on the right side of operator <<, indicate whether the expression is an lvalue or rvalue:

```cpp
// a)
std::cout << 5; 		// rvalue
// b)
int {5}; 
std::cout << x; 		// lvalue
// c)
int x {5};
std::cout << x + 1 		// rvalue
// d)
int foo() { return 5; }
std::cout << foo(); 	// rvalue
// e)
int& max(int &x, int &y) { return x > y ? x : y; }
int x { 5 };
int y { 6 };
std::cout << max(x, y); // lvalue
```

### 12.x.2 What is the output of this program?

```cpp
#include <iostream>

int main()
{
	int x{ 4 };
	int y{ 6 };

	int& ref{ x };
	++ref;
	ref = y;
	++ref;

	std::cout << x << ' ' << y; // 7 6 

	return 0; 
}
```

### 12.x.3 Name two reasons why we prefer to pass arguments by const reference instead of by non-const reference whenever possible.

Because making non const reference will provide the ability to modify the value of the argument, when this is not needed provide const.
A non const can only acept a modifiable l value as an argument, while a const ref can accept a modifiable lvalue, a non-modifiable lvalue or an rvalue as an argument.

### 12.x.4 What's the difference between a const pointer and a pointer-to-const ?

```cpp
const int* ptr1{nullptr}; // This pointer "consts" to an constant value of a variable
int* const ptr2{nullptr}  // This pointer "consts" the objects address making it non modifiable
```

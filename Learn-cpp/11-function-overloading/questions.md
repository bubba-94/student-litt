# Function Overloading

## Questions

### 11.6.1 Describe why construction blueprints are a type of template

- Because it represents the structure of an object and not the finished product (materials, colors) that is presented.

### 11.x.1a What is the output of this program and why?

```cpp
#include <iostream>

void print(int x)
{
    std::cout << "int " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    short s { 5 };
    print(s);

    return 0;
}
```

- The output is `int 5` because of it will match the print(int) function first because of numeric promotion. The compiler prioritizes a numeric promotion over a numeric conversion.

### 11.x.1b Why won’t the following compile?

```cpp
#include <iostream>
void print()
{
    std::cout << "void\n";
}

void print(int x=0)
{
    std::cout << "int " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    print(5.0f);
    print();

    return 0;
}
```

- Because function overloading does not allow differentiation with defaulted value. The compiler cant resolve print(void) and print(int x = 0)

### 11.x.1c Why won’t the following compile?

```cpp
#include <iostream>

void print(long x)
{
    std::cout << "long " << x << '\n';
}

void print(double x)
{
    std::cout << "double " << x << '\n';
}

int main()
{
    print(5);

    return 0;
}
```

- The literal 5 is an int. Converting an int to a long or a double is a numeric conversion, and the compiler will be unable to determine which function is a better match.

### 11.x.3 What is the output of this program and why?

```cpp
#include <iostream>

template <typename T>
int count(T) // This is the same as int count(T x), except we're not giving the parameter a name since we don't use the parameter
{
    static int c { 0 };
    return ++c;
}

int main()
{
    std::cout << count(1) << '\n';
    std::cout << count(1) << '\n';
    std::cout << count(2.3) << '\n';
    std::cout << count<double>(1) << '\n';

    return 0;
}
```

-  1, 2, 1, 2. The third and fourth function call will instantiate a new function and a new variable to count.

### 11.x.4 What is the output of this program?

```cpp
#include <iostream>

int foo(int n)
{
    return n + 10;
}

template <typename T>
int foo(T n)
{
    return n;
}

int main()
{
    std::cout << foo(1) << '\n'; // #1

    short s { 2 };
    std::cout << foo(s) << '\n'; // #2

    std::cout << foo<int>(4) << '\n'; // #3

    std::cout << foo<int>(s) << '\n'; // #4

    std::cout << foo<>(6) << '\n'; // #5

    return 0;
}
```
 
- 11, 2, 4, 2, 6. Only the first call will match non templated function. 
Since the other functions are explicit calls or doesnt match the non templated functions, the templated function will be called for the rest calls to foo().
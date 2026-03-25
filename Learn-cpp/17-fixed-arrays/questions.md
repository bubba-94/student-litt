# Fixed arrays std::array

## Questions

### 17.1.1a What type of initialization does std::array use?

Aggregate initialiation

### 17.1.1b Why should you explicitly value-initialize a std::array if you are not providing initialization values?

If no value is provided for a certain element, it will default initialize. This would leave most types uninitialized

### 17.1.2 Define a std::array that will hold the high temperature for each day of the year (to the nearest tenth of a degree).

```cpp
#include <array>

std::array<double, 365> temperatures{};
```

### 17.1.3 Initialize a std::array with the following values: ‘h’, ‘e’, ‘l’, ‘l’, ‘o’. Print the value of the element with index 1.

```cpp
#include <array>

std::array<char, 5> hello {'h', 'e', 'l', 'l', 'o'};
std::cout << hello.at(1);
```

### 17.7.1 Convert the following std::array definition to an equivalent constexpr C-style array definition:

```cpp 
constexpr std::array<int, 3> a{}; // allocate 3 ints
constexpr int a[3] {}; // C style
```

### 17.7.2 What three things are wrong with the following program?
```cpp
#include <iostream>

int main()
{
    int length{ 5 }; // Has to be compile time const
    const int arr[length] { 9, 7, 5, 3, 1 };

    std::cout << arr[length]; // Out of bounds
    arr[0] = 4; // Const array not modifiable

    return 0;
}
```

### 17.x.1 What’s wrong with each of these snippets, and how would you fix it?

#### 17.x.1a

```cpp
#include <array>
#include <iostream>

int main()
{
    std::array arr { 0, 1, 2, 3 };

    // An off by one error
    for (std::size_t count{ 0 }; count <= std::size(arr); ++count)
    {
        std::cout << arr[count] << ' '; // Use functions provided in the std::array class instead: arr.at(count)
    }

    std::cout << '\n';

    return 0;
}
```

#### 17.x.1b

```cpp
#include <iostream>

void printArray(int array[])
{
    for (int element : array)
    {
        std::cout << element << ' ';
    }
}

int main()
{
    int array[] { 9, 7, 5, 3, 1 };
    
    // Decays to a pointer, use std::array instead
    printArray(array);

    std::cout << '\n';

    return 0;
}
```

#### 17.x.1c

```cpp
#include <array>
#include <iostream>

int main()
{
    std::cout << "Enter the number of test scores: ";
    std::size_t length{};
    std::cin >> length;

    // Compile error, length has to be compile-time constant
    // std::vector if constant expression is not possible
    std::array<int, length> scores;

    for (std::size_t i { 0 } ; i < length; ++i)
    {
        std::cout << "Enter score " << i << ": ";
        std::cin >> scores[i];
    }
    return 0;
}
```
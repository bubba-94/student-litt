# Type alias, deduction and conversion

## Questions

### Whats the difference between implicit and explicit conversion? 

- **Explicit:** when a type conversion is implemented by the programmer and instructs the compiler to convert a certain type.
- **Implicit:** when a type conversion is performed by the compiler to convert some kind of conversion.

### Given the following function prototype:
```cpp
int printData();
```

- Convert the int return value to a type alias named PrintError. Include both the type alias statement and the updated function prototype.

```cpp
using PrintError = int;
PrintError printData();
```

### 10.x.1 What type of conversion happens in each of the following cases? Valid answers are: No conversion needed, numeric promotion, numeric conversion, won’t compile due to narrowing conversion. Assume int and long are both 4 bytes.

```cpp
int main()
{
    int a { 5 };                        // 1a
    int b { 'a' };                      // 1b
    int c { 5.4 };                      // 1c
    int d { true };                     // 1d
    int e { static_cast<int>(5.4) };    // 1e

    double f { 5.0f };                  // 1f
    double g { 5 };                     // 1g

    // Extra credit section
    long h { 5 };                       // 1h

    float i { f };                      // 1i (uses previously defined variable f)
    float j { 5.0 };                    // 1j

}
```
- 1a. No conversion neeed
- 1b. Numeric promotion
- 1c. Narrowing conversion
- 1d. Numeric promotion
- 1e. Numeric conversion
- 1f. Numeric conversion
- 1g. Numeric conversion
- 1h. Numeric promotion
- 1i. Narrowing conversion
- 1j. Numeric conversion

### 10.x.2 Update the following program to use type aliases for degrees and radians values
```cpp
// Example
#include <iostream>

namespace constants
{
    constexpr double pi { 3.14159 };
}

double convertToRadians(double degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    double degrees{};
    std::cin >> degrees;

    double radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}

// Solution
#include <iostream>

using Degrees = double;
using Radians = double;

namespace constants
{
    constexpr double pi { 3.14159 };
}

Radians convertToRadians(Degrees degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians { convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}

```

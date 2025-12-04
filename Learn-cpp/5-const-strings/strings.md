# Constants 

## Summary and quiz


## Questions

### Why are named constants often a better choice then literal constans?

Using named constants makes it easier to modify a program if needed and create a better understanding of what a variable "does".

### Why are const/constexpr variables usually better choice than #defined symbolic constants?

Becuase const and constexpr variables live through the compilation and are not optimized out after compilation
A #define preprocessor variable is lost when the compilation is finished.
This makes it easier to debug and use the variables during runtime.

### Find 3 issues in the follow code

```cpp

#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{
    std::cout << "How old are you?\n";

    std::uint8_t age{}; // <- use int instead, uint8 treated as char
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    if (age >= 16) // <- Magic number used, design flaw
        std::cout << "Yes";
    else
        std::cout << "No";

    std::cout << '.\n'; // <- Double quotes needed

    return 0;
}
```

### What are the primary differences between `std::string` and `std::string_view`?

The primary difference is that `std::string_view` provides a read-only a string of an initialized object (`std::string`, C-style string or other).
`std::string_view` is inexpensive compared to the copy assignment of a `std::string` when it is used.

### What can go wrong when using a `std::string_view`?

When modifying the actual object a `std::string_view` is "viewing" and not updated correctly. This will result in undefined behaviour.

### Program

Link to [program](solutions/5-exam-4.cpp)

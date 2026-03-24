# Containers and Arrays

## Description

Introduction to the backbone of alot of applications. Arrays and dynamic arrays.

## Questions

### 16.3.2 

- a) What is `size_type` and what is it used for?

    `size_type` is an alias for std::size_t which is the varaible that should be used for indexing.

- b) What type does `size_type` default to? Is it signed or unsigned?

    std::size_t, unsigned

- c) Which functions to get the length of a container return `size_type`?

    `.size()` function

### 16.x.1 Write definitions for the following. Use CTAD where possible 

- a) A `std::vector` initialized with the first 6 even numbers.
- b) A constant `std::vector` initialized with the values 1.2, 3.4, 5.6, and 7.8.
- c) A constant `std::vector` of `std::string_view` initialized with the names “Alex”, “Brad”, “Charles”, and “Dave”.
- d) A `std::vector` with the single element value 12.
- e) A `std::vector` with 12 int elements, initialized to the default values.

```cpp
#include <vector>
#include <string_view>
// a) Will be deduced to int
    std::vector even{2,4,6,8,10};

// b) Deduced to double
    const std::vector doubles{1.2, 3.4, 5.6, 7.8};

// c) Could be deduced using literals
    using namespace std::literals::string_view_literals; 
    const std::vector<std::string_view> name{"Alex"sv, "Brad"sv, "Charles"sv, "Dave"sv};

// d) Deduced to int
    std::vector single{12};

// e) Initialied with a length of 12, specify type is mandatory
    std::vector<int>vector(12);
```
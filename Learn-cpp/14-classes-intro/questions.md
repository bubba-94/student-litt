# Introduction to Classes and OOP

## Questions 

### 14.1.1 

- a) Update the animal procedural example and instantiate a snake instead of a cat.
```cpp
enum AnimalType
{
    snake,
    dog,
    chicken,
};

constexpr std::string_view animalName(AnimalType type)
{
    switch (type)
    {
    case snake: return "snake";
    case dog: return "dog";
    case chicken: return "chicken";
    default:  return "";
    }
}

constexpr int numLegs(AnimalType type)
{
    switch (type)
    {
    case snake: return 4;
    case dog: return 4;
    case chicken: return 2;
    default:  return 0;
    }
}


int main()
{
    constexpr AnimalType animal{ snake };
    std::cout << "A " << animalName(animal) << " has " << numLegs(animal) << " legs\n";

    return 0;
}
```

- b) Update the animal OOP-like example above and instantiate a snake instead of a cat.

```cpp
#include <iostream>
#include <string_view>

struct Snake
{
    std::string_view name{ "snake" };
    int numLegs{ 0 };
};

struct Dog
{
    std::string_view name{ "dog" };
    int numLegs{ 4 };
};

struct Chicken
{
    std::string_view name{ "chicken" };
    int numLegs{ 2 };
};

int main()
{
    constexpr Snake animal;
    std::cout << "a " << animal.name << " has " << animal.numLegs << " legs\n";

    return 0;
}
```

### 14.5.1 

What is a public member? 
- A member variable that is exposed outside of the class object

What is a private member?
- A member variable that is only allowed access inisde the class object

What is an access specifier? 
- A type declration of how variables and functions CAN be accessed inside a class (e.g private: or public:)

How many access specifier are there, and what are they?
- private, public and protected.
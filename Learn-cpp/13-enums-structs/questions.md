# Enums and Structs (user defined types)

## Questions

### 13.1.1 Define an unscoped enumerated type named MonsterType to choose between the following monster races: orc, goblin, troll, ogre, and skeleton.

```cpp
#include <iostream>
enum MonsterType{
    orc, goblin,
    troll, ogre,
    skeleton,
}
```

### 13.1.2 Put the MonsterType enumeration inside a namespace. Then, create a main() function and instantiate a troll. The program should compile.

```cpp
#include <iostream>
namespace MonsterType{
    enum MonsterType{
        orc, goblin,
        troll, ogre,
        skeleton,
    };
};

int main (){
    MonsterType::MonsterType monster {MonsterType::orc};

    std::cout << monster << "\n"; // Print integer value of orc == 0

    return 0;
}
```

### 13.2.1 True or false. Enumerators can be:

- a) Given an integer value: true
- b) Given no explicit value: true
- c) Given a floating point value: false
- d) Given a negative value: true
- e) Given a non-unique value: true
- f) Given the value of a prior enumerator (e.g. magenta = red): true??
- g) Given a non-constexpr value: false

### 13.10.3 In the solution to the prior quiz question, why does getFraction() return by value instead of by reference?

[Solition](solutions/13.10.2.cpp)

- Because returning by reference would reference be left dangling since the result Fraction is created as a temporary object inside multiply(f1,f2)

### 13.x.2 Specify whether objects of each of the given types should be passed by value, const address, or const reference. You can assume the function that takes these types as parameters doesn’t modify them.

```cpp
char            // value
std::string     // const reference
unsigned long   // value
bool            // value
enum            // value

struct Position // const reference
{
  double x{};
  double y{};
  double z{};
};

struct Player  // const reference
{
  int health{};
  // The Player struct is still under development.  More members will be added.
};

int // const address
// when null is a valid argument 

std::string_view // value

```

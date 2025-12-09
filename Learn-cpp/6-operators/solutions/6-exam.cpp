#include <iostream>

// Write the function getQuantityPhrase() here

std::string getQuantityPhrase(int x){
    std::string value{};

    if (x < 0) return value = "negative";
    if (x == 0) return value = "no";
    if (x == 1) return value = "a sinlge";
    if (x == 2) return value = "a couple of";
    if (x == 3) return value = "a few";

    // Return many if condition matches anything above 3
    return value = "many";
}

std::string getApplesPluralized(int x){
    
    return (x > 1) ? std::string{"apples"} : std::string{"apple"};
}
// Write the function getApplesPluralized() here

int main()
{
    constexpr int maryApples { 1 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}
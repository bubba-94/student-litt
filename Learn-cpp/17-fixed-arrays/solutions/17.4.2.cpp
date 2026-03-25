#include <array>
#include <iostream>


struct Item{
    int gold;
    std::string_view name;
};

template <std::size_t N>
void printStore(const std::array<Item, N>& arr)
{
    for (const auto& item: arr)
    {
        std::cout << "A " << item.name << " costs " << item.gold << " gold.\n";
    }
}

int main(){

    std::array<Item, 4>items {{
        {1, "sword"}, 
        {2, "dagger"}, 
        {3, "club"}, 
        {4, "spear"}}};
    
    printStore(items);

    return 0;
}
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

    std::array items{Item{1, "sword"}, Item{2, "dagger"}, Item{3, "club"}, Item{4, "spear"}};
    
    printStore(items);

    return 0;
}
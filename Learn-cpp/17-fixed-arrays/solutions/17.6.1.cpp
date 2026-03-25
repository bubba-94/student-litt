#include <array>
#include <iostream>


namespace Animal{
    enum Type{
        chicken, dog,
        cat, elephant,
        duck, snake,
        max
    };

    struct Data{
        Type type;
        int legs;
        std::string noice;
    };
};

std::string_view toStrOf(Animal::Type type){
    switch(type){
        case Animal::Type::chicken: return "chicken";
        case Animal::Type::dog: return "dog";
        case Animal::Type::cat: return "cat";
        case Animal::Type::elephant: return "elephant";
        case Animal::Type::duck: return "duck";
        case Animal::Type::snake: return "snake";
        default: return " ";
    }
}

template <size_t N>
void print(const std::array<Animal::Data, N>& arr){
    for(const auto& animal: arr){
        std::cout << "A " << toStrOf(animal.type) << " has " << animal.legs << " and says " << animal.noice << "\n"; 
    }
}

int main(){

    std::array<Animal::Data, Animal::Type::max> animals{{
        {Animal::Type::chicken, 2, "cluck"},
        {Animal::Type::dog, 4, "woof"},
        {Animal::Type::cat, 4, "meow"},
        {Animal::Type::elephant, 4, "pawoo"},
        {Animal::Type::duck, 2, "quack"},
        {Animal::Type::snake, 2, "hissss"},
    }};
    
    print(animals);

    return 0;
}
#include <iostream>
#include <cstdint>

uint8_t rotl(uint8_t &bits){

    bits = (bits << 1) | (bits >> 3);

    // Clear 7-4 bits
    for (int i = 7; i >= 4; i--){
        // Mask off 7-4 bits
        bits &= 0x0F; 
    }

    return bits;
}

void print(uint8_t &bits){
    std::cout << "Value of bitset: ";

    for (int i = 3; i >= 0; i--){
        std::cout << ((bits >> i) & 1);
    }

    std::cout << " = " << static_cast<int>(bits) << "\n";
}

int main (){

    uint8_t bits = 0b0001;
    uint8_t bits2 = 0b1001;

    uint8_t *ptr{};


    ptr = &bits;
    print(*ptr);

    ptr = &bits2;
    print(*ptr);

    std::cout << "--After left rotation--\n";

    // point and print each bitset
    ptr = &bits;
    rotl(*ptr);
    print(*ptr);

    ptr = &bits2;
    rotl(*ptr);
    print(*ptr);

}   
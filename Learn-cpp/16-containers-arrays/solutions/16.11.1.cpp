/*
Write a program that pushes and pops values, and outputs the following sequence:

(Stack: empty)
Push 1 (Stack: 1)
Push 2 (Stack: 1 2)
Push 3 (Stack: 1 2 3)
Pop    (Stack: 1 2)
Push 4 (Stack: 1 2 4)
Pop    (Stack: 1 2)
Pop    (Stack: 1)
Pop    (Stack: empty)
*/

#include <iostream>
#include <vector>
void print(const std::vector<int>& vec){
    if (vec.empty()){
        std::cout << "(Stack: empty";
    }
    else{
        std::cout << "(Stack: ";
        for (size_t i = 0; i < vec.size(); ++i)
        {
            std::cout << vec.at(i) << " ";
        }    
    }
    std::cout << ")\n";

    
}
void pop(std::vector<int>&vec){
    vec.pop_back();
    std::cout << "Pop   ";
    print(vec);
}

void push(std::vector<int>& vec, int value){
    vec.push_back(value);
    std::cout << "Push " << value;
    print(vec);
}

int main (){
    std::vector <int> stack{};
    print(stack);
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    pop(stack);
    push(stack, 4);
    pop(stack);
    pop(stack);
    pop(stack);
    
}
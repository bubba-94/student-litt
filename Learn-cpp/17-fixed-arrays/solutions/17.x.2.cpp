#include <array>
#include <vector>
#include <iostream>
#include <string>
#include <cctype>

namespace Potion{
    enum Type{
        healing,
        mana,
        speed,
        invis, 
        max
    };

    struct Data{
        std::string name;
        int cost;
    };

    struct Inventory{
        Data data;
        int amount{0};
    };
};

class Game{
public:
    Game(int init_gold, std::string name)
        : m_current_gold{init_gold}, m_name{name} {}

    void run(){
        welcome();

        while (true){
            menu();
            char c = input();
            if (c == 'q') break;
        }

        exit();
    }

private:
    char input(){
        char c;
        std::cout << "Enter the number of potion you'd like to buy (or q to quit): ";
        std::cin >> c;

        if (!check(c)){
            return 'q';
        }

        add(c);
        return c;
    }

    void add(char input){
        int choice = input - '0';  // convert char to int

        if (choice < 0 || choice >= static_cast<int>(m_menu.size())){
            std::cout << "Invalid selection.\n";
            return;
        }

        Potion::Data item = get(choice);

        if (m_current_gold < item.cost){
            std::cout << "Not enough gold!\n";
            return;
        }

        m_current_gold -= item.cost;

        // Check if already in backpack
        for (auto& inv : m_backpack){
            if (inv.data.name == item.name){
                inv.amount++;
                return;
            }
        }

        // Otherwise add new item
        m_backpack.push_back({item, 1});
    }

    Potion::Data get(int index){
        return m_menu.at(index);
    }

    bool check(char c){
        c = std::tolower(c);
        return c != 'q';
    }

    void inventory(){
        std::cout << "Backpack:\n";
        for (const auto& item : m_backpack){
            std::cout << "Item: " << item.data.name
                      << " x" << item.amount << "\n";
        }
    }

    void menu(){
        std::cout << "\nHere is our selection of potions today:\n";
        for(size_t i = 0; i < m_menu.size(); ++i){
            std::cout << i << ") " << m_menu[i].name
                      << " costs " << m_menu[i].cost << "\n";
        }
        std::cout << "Gold: " << m_current_gold << "\n";
    }

    void exit(){
        std::cout << "\nLeaving shop with " << m_current_gold << " gold coins left and:\n";
        inventory();
    }

    void welcome(){
        std::cout << "Welcome " << m_name << " to Roscoe's Potion Shop!\n"
                  << "You have " << m_current_gold << " coins at your disposal.\n";
    }

private:
    std::string m_name;
    int m_current_gold;
    std::vector<Potion::Inventory> m_backpack;

    std::array<Potion::Data, Potion::Type::max> m_menu {{
        {"healing", 20}, 
        {"mana",    30},
        {"speed",   12},
        {"invis",   50}
    }};
};

int main(){
    std::string input; 
    std::cout << "Name: ";
    std::cin >> input;

    Game app(100, input);
    app.run();

    return 0;
}
/*
    Let’s implement the game C++man (which will be our version of the classic children’s lynching game Hangman.

    In case you’ve never played it before, here are the abbreviated rules:

    High level:

    The computer will pick a word at random and draw an underscore for each letter in the word.
    The player wins if they guess all the letters in the word before making X wrong guesses (where X is configurable).
    Each turn:

    The player will guess a single letter.
    If the player has already guessed that letter, it doesn’t count, and play continues.
    If any of the underscores represent that letter, those underscores are replaced with that letter, and play continues.
    If no underscores represent that letter, the player uses up one of their wrong guesses.
    Status:

    The player should know how many wrong guesses they have left.
    The player should know what letters they have guessed incorrectly (in alphabetical order).
    Because this is C++man, we’ll use a + symbol to indicate the number of wrong guesses left. If you run out of + symbols, you lose.

    Here’s sample output from the finished game:
*/

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>

class Hangman {
public:
    struct Answer {
        char letter;
        bool show = false;
    };

    Hangman(const std::string &word, int max_attempts)
        : m_max_attempts{max_attempts}
    {
        for (char c : word) {
            m_answer.push_back({c, false});
        }
    }

    void welcome() {
        std::cout << "Welcome to C++man (a variant of Hangman)\n"
                  << "To win: guess the word.\n"
                  << "To lose: run out of pluses.\n"
                  << "--------------------------------------\n\n";
    }

    void run() {
        char input{};

        do {
            present();
            std::cout << "Provide a character: ";
            std::cin >> input;

            process(input);

            if (is_won()) {
                present();
                std::cout << "You WIN!\n";
                return;
            }

        } while (m_current_attempts < m_max_attempts);

        std::cout << "You LOST! The word was: ";
        for (const auto &c : m_answer) {
            std::cout << c.letter;
        }
        std::cout << "\n";
    }

private:
    void present() {
        std::cout << "\nWord: ";
        for (const auto &c : m_answer) {
            if (c.show)
                std::cout << c.letter;
            else
                std::cout << "_";
        }

        std::cout << "\nWrong guesses: ";
        for (char c : m_wrong) {
            std::cout << c << " ";
        }

        std::cout << "\nAttempts left: ";
        for (int i = 0; i < m_max_attempts - m_current_attempts; ++i) {
            std::cout << "+";
        }

        std::cout << "\n------------------------------------\n";
    }

    void process(char guess) {
        guess = std::tolower(guess);

        if (already_guessed(guess)) {
            std::cout << "Already guessed!\n";
            return;
        }

        if (check(guess)) {
            decrypt(guess);
        } else {
            wrong(guess);
        }
    }

    bool check(char guess) {
        for (const auto &c : m_answer) {
            if (guess == c.letter) {
                return true;
            }
        }
        return false;
    }

    void decrypt(char guess) {
        for (auto &c : m_answer) {
            if (c.letter == guess) {
                c.show = true;
            }
        }
    }

    void wrong(char guess) {
        m_current_attempts++;
        m_wrong.push_back(guess);

        std::sort(m_wrong.begin(), m_wrong.end());
    }

    bool already_guessed(char guess) {
        for (char c : m_wrong) {
            if (c == guess)
                return true;
        }
        for (const auto &c : m_answer) {
            if (c.letter == guess && c.show)
                return true;
        }
        return false;
    }

    bool is_won() {
        for (const auto &c : m_answer) {
            if (!c.show)
                return false;
        }
        return true;
    }

private:
    std::vector<Answer> m_answer;
    std::vector<char> m_wrong;
    int m_max_attempts;
    int m_current_attempts = 0;
};

int random_index(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
    srand(time(NULL));
    std::vector<std::string> words{
        "mystery", "broccoli", "account", "almost",
        "spaghetti", "opinion", "beautiful", "distance", "luggage"
    };

    int rand = random_index(0, words.size() - 1);
    int max_tries = 10;

    Hangman game(words.at(rand), max_tries);

    game.welcome();
    game.run();
}
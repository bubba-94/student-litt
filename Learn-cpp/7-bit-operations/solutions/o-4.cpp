#include <cstdint>
#include <iostream>

bool validateNumber(int x) { return (x <= 255) && (x >= 0); }

std::string getNumberFromUser() {

  std::string placeholder{""};

  std::cout << "Enter a Number : ";
  int temp;
  std::cin >> temp;

  std::uint8_t value = static_cast<uint8_t>(temp);

  bool result{validateNumber(temp)};

  if (!result) {
    return "0";
  }

  for (int i = 0; value > 0; i++) {
    bool isEven{value % 2 == 0};

    if (isEven) {
      placeholder = "0" + placeholder;
    } else {
      placeholder = "1" + placeholder;
    }
    value /= 2;
  }

  return placeholder;
}

int main() {
  std::string number{getNumberFromUser()};

  if (number == "0") {
    std::cout << "Invalid Number";
  } else {

    std::cout << number;
  }

  return 0;
}
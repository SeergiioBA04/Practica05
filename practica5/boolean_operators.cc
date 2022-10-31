#include<iostream>

int main() {
  bool number1, number2;
  std::cout << "Introduce el valor 1: " << std::endl;
  std::cin >> number1;
  std::cout << "Introduce el valor 2: " << std::endl;
  std::cin >> number2;
  
  if(number1 == true || number2 == true) {
    std::cout << "AND = true" << std::endl;
    std::cout << "OR = true" << std::endl;
    std::cout << "NOT = false" << std::endl;
  }else if(number1 == true || number2 == false) {
    std::cout << "AND = false" << std::endl;
    std::cout << "OR = true" << std::endl;
    std::cout << "NOT = false" << std::endl;
  }else if(number1 == false || number2 == true) {
    std::cout << "AND = false" << std::endl;
    std::cout << "OR = true" << std::endl;
    std::cout << "NOT = false" << std::endl;
  }else if(number1 == false || number2 == false) {
    std::cout << "AND = false" << std::endl;
    std::cout << "OR = false" << std::endl;
    std::cout << "NOT = false" << std::endl;
  }
}

#include<iostream>

int main() {
  int number1;
  int number2;

  std::cin >> number1 >> number2;
  if(number1 >= 0 && number2 >= 0) { 
    for(int i = number2; i >= number1; i--) {
      std::cout << i << std::endl;
    }
      if(number1 > number2) {
    for(int h = number1; h >= number2; h--) {
      std::cout << h << std::endl;
       }
     }
  }else if(number1 >= 0 && number2 <= 0) {
    for(int i = number1; i >= number2; i--) {
      std::cout << i << std::endl;
    }
  }else if(number1 <= 0 && number2 >= 0) {
    for(int i = number1; i <= number2; i++) {
      std::cout << i << std::endl;
    }
  }else if(number1 <= 0 && number2 <= 0) {
    for(int i = number2; i <= number1; i++) {
      std::cout << i << std::endl;
    }
      if(number1 < number2) {
    for(int h = number1; h <= number2; h++) {
      std::cout << h << std::endl;
      }
     }
  }
}

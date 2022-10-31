#include<iostream>

int main() {
  char letra;
  int letra_en_numero;

  std::cin >> letra;

  letra_en_numero = static_cast<int>(letra);
  
  if(letra_en_numero < 97) {
    int letra_minuscula = letra_en_numero + 32;  
    std::cout << char(letra_minuscula) << std::endl;
  }else if(letra_en_numero >= 97) {
    int letra_mayuscula = letra_en_numero - 32;
    std::cout << char(letra_mayuscula) << std::endl;
  }
}

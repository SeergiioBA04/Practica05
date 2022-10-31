#include<iostream>

int main() {
  char letra;
  int letra_en_numero;

  std::cout << "Introduce la letra: " << std::endl;
  std::cin >> letra;

  letra_en_numero = static_cast<int>(letra);
  int letra_mayuscula_numero;
  letra_mayuscula_numero = letra_en_numero - 32;
  std::cout << char(letra_mayuscula_numero) << std::endl;
}

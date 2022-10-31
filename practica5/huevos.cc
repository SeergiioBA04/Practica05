#include<iostream>

int main() {
  int huevos{0};
  std::cout << "Huevos?" << std::endl;
  std::cin >> huevos;
  int cajas{0};
  int resto{0};
  cajas = huevos / 6;
  resto = huevos % 6;
  std::cout << "Con " << huevos << " huevos se pueden llenar " << cajas 
  << " cajas y sobran " << resto << " huevos" << std::endl;
}

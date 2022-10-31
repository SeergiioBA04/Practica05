#include<iostream>

int main() {
  int horas, minutos, segundos, tiempo;
  std::cin >> tiempo;
  
  horas = tiempo / 10000;
  minutos = tiempo / 100;
  minutos = minutos % 100;
  segundos = tiempo % 100;

  std::cout << horas << ":" << minutos << ":" << segundos << std::endl;
}

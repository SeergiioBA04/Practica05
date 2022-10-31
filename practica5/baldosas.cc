#include<iostream>

int main() {
  double largo{0};
  double ancho{0};
  std::cout << "Largo? " << std::endl;
  std::cin >> largo;
  std::cout << "Ancho? " << std::endl;
  std::cin >> ancho; 
  double area = largo * ancho;
  double area_baldosas{0.6*0.6};
  int numero_de_baldosas = area / area_baldosas;
  std::cout << "La habitación tendrá " << numero_de_baldosas << 
  " baldosas enteras. " << std::endl; 
}

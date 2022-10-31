
/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Sergio Borrell alu0101563015@ull.edu.es
  * @date Oct 27 2022
  * @brief The program reads two natural numbers a and b, with b > 0, and prints 
  *        the integer division d and the remainder r of a divided by b.
  *        By definition, d and r must be the only integer numbers such that 0=<r<b and db+r=a.
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */

#include<iostream>

int main() {
  std::cout << (50 % 6) << (81 % 10) << (127 % 100) << (1000 % 999) << (1 %   10) << (5 % 1) << (3 % 1) << (111 % 2) << std::endl;
}

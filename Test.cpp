#include <iostream>
#include "stdio.h"
int main()
{
  float number1 , number2;
  std::cout << "Enter number 1:";
  std::cin >> number1;
  std::cout << "Enter number 2:";
  std::cin >> number2;
  std::cout << number1 <<"+"<<number2<<"="<<(number1+number2)<<'\n';
  std::cout << number1 <<"-"<<number2<<"="<<(number1-number2)<<'\n';
  std::cout << number1 <<"*"<<number2<<"="<<(number1*number2)<<'\n';
  std::cout << number1 <<"/"<<number2<<"="<<(number1/number2)<<'\n';
  return 0;
}

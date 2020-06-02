//Libraries
#include <stdio.h>
#include <iostream>
#include <operations.hpp>

//Auxiliar functions
float read_number(std::string frase); 


//Main function
int main() 
{
  //Welcome message
  printf("Hello, world!\n");

  //Init local vars
  float A,B;

  //Get user inputs
  A = read_number("Give me a number A: ");
  B = read_number("Give me a number B: ");

  //Print operations
  std::cout << A << " + " << B << " = " << suma(A,B) << std::endl;
  std::cout << A << " - " << B << " = " << resta(A,B) << std::endl;
  std::cout << A << " * " << B << " = " << multi(A,B) << std::endl;
  std::cout << A << " / " << B << " = " << div(A,B) << std::endl;
  
  return 0;
}

float read_number(std::string frase)
{
  float N;
  
  std::cout << frase;
  std::cin >> N;

  return N;

} 

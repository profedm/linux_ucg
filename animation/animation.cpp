//Libraries
#include <stdio.h>
#include <iostream>
#include <unistd.h> // usleep
#include <ucg.hpp>

//Main function
int main() 
{
	//Print logo
	print_uclogo(100000);
	
	//Wait some secs
	usleep(1000000);
	
	//Lauch rocket
	fly_rocket(300000);
  
  return 0;
}

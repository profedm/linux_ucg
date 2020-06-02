#include <stdio.h>
#include <iostream>
#include <time.h>  // time
#include <unistd.h> // usleep

//Structs
const char rocket[] =
"           _\n\
          /^\\\n\
          |-|\n\
          |U|\n\
          |N|\n\
          |I|\n\
          |V|\n\
          | |\n\
          |C|\n\
          |U|\n\
          |A|\n\
          |U|\n\
          |H|\n\
          |T|\n\
          |E|\n\
          |M|\n\
         /|O|\\\n\
        / |C| \\\n\
       |  | |  |\n\
        `-\"\"\"-`\n\
";

//Define functions
void print_uclogo(int time);
void fly_rocket(int time);

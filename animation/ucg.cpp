#include "ucg.hpp"

void print_uclogo(int time)
{
	float t_anim = time;
	
	//Print logo
	std::cout << "                     /^\\		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |-|		  " << std::endl;
	usleep(t_anim);	
	std::cout << "                     |U|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |N|		  " << std::endl;
	usleep(t_anim);	
	std::cout << "                     |I|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |V|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     | |		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |C|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |U|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |A|		  " << std::endl;
	usleep(t_anim);	
	std::cout << "                     |U|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |H|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |T|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |E|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                     |M|		  " << std::endl;
	usleep(t_anim);
	std::cout << "                    /|O|\\		  " << std::endl;
	usleep(t_anim);
	std::cout << "                   / |C| \\		  " << std::endl;
	usleep(t_anim);
	std::cout << "                  |  | |  |		  " << std::endl;
	usleep(t_anim);
	std::cout << "                 / --| |-- \\		  " << std::endl;
	usleep(t_anim);
	std::cout << "                  *************             " << std::endl;
	usleep(t_anim);
	std::cout << "              *********************         " << std::endl;
	usleep(t_anim);
	std::cout << "           ***************************      " << std::endl;
	usleep(t_anim);
	std::cout << "         ***  *****************  **  ***    " << std::endl;
	usleep(t_anim);
	std::cout << "        **** *  *************  **  ******   " << std::endl;
	usleep(t_anim);
	std::cout << "       ******  *  *********  **  *********  " << std::endl;
	usleep(t_anim);
	std::cout << "      ****** **  *  *****  **  ************ " << std::endl;
	usleep(t_anim);
	std::cout << "     ********  **  *  ** **  *  ************" << std::endl;
	usleep(t_anim);
	std::cout << "     *******  *  **  *  ** *  **  **********" << std::endl;
	usleep(t_anim);
	std::cout << "     ********.  *  **  * *  **  *   ********" << std::endl;
	usleep(t_anim);
	std::cout << "     **********.  *  ***  **  * **  ********" << std::endl;
	usleep(t_anim);
	std::cout << "     ************.  **  **  *   ************" << std::endl;
	usleep(t_anim);
	std::cout << "     ***********  **  **  *   **************" << std::endl;
	usleep(t_anim);
	std::cout << "      ************  **  *   *  ************ " << std::endl;
	usleep(t_anim);
	std::cout << "       *********  **  *   *  **  *********  " << std::endl;
	usleep(t_anim);
	std::cout << "        ******  **  *   *****  **  ******   " << std::endl;
	usleep(t_anim);
	std::cout << "         ***  **  *   *********  **  ***   " << std::endl; 
	usleep(t_anim);
	std::cout << "           ***************************  " << std::endl;    
	usleep(t_anim);
	std::cout << "              *********************  " << std::endl;
}

void fly_rocket(int time)
{
for (int i = 0; i < 50; i ++) printf("\n"); // jump to bottom of console
    printf("%s", rocket);
    int j = 300000;
    for (int i = 0; i < 50; i ++) {
        usleep(j); // move faster and faster,
        j = (int)(j * 0.9); // so sleep less each time
        printf("\n"); // move rocket a line upward
    }

}

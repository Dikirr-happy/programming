/*This Program will demonstrate the use of Global, External, Static, Local and Automatic Variables*/
#include <stdio.h>

int O=20;//This is the Global variable
extern int R=0;//This is the External variable

int Static_Variable()
{
	static int Q=12;//This is the Static variable
	return Q;//It returns the value for S making it available for the main function
}
int main()
{
  int D=5;//This is the Automatic variable
  int F=15;//This is both the Local variable
  R=25;//Assign a new value to the External vaiable 'R'
  printf("\n Global variable 'O'=%d", O);//Display the Global variables
  printf("\n External variable 'R'=%d", R);//Display the External variables
  printf("\n Static variable 'Q'=%d", Static_Variable());//Display the Static variables
  printf("\n Automatic variable 'D'=%d", D);//Display the Automatic variables
  printf("\n Local variable 'F'=%d", F);//Display the Local variables
  /*All Automatic variables are Local variables*/
 return 0; 
}

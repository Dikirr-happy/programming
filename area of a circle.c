/*area of a circle*/                         
#include <stdio.h>
int main()
{
int r;//declare the radius r
float pie,area;//declare pie and area
pie=3.142;//initialize the value of pie
printf("enter the value of the radius");//display a message to prompt the user to enter the value for radius
scanf("%d",&r);//take the value for radius
printf("\n area of the circle=pie*r*r");
area=pie*r*r;//calculate the area
printf("\n area=%f",area);//display the value of the area
return 0;
}

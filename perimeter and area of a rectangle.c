/*Arithmetic operation Perimeter and Area of a Rectangle.*/
#include <stdio.h>

int main()
{
int L, W;//L stands for Length and W stands for Width
int Perimeter, Area;
printf("Enter the length\t");//Prompt the user to enter a value for length
scanf("%d", &L);//Collect the input value for Length
printf("\nEnter the width\t");//Prompt the user a value for width
scanf("%d", &W);//Collect the input value for Width
printf("\nPerimeter=2*Length+2*Width");//Display the formula for Perimeter
Perimeter=2*L+2*W;//Calculate the Perimeter of the rectangle
printf("\nArea=Length*Width");//Display the formula for Area
Area=L*W;//Calculate the Area of the rectangle
printf("\nPerimeter=%d", Perimeter);//Display the Perimeter
printf("\nArea=%d", Area);//Display the Area
}

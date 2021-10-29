/*Arithmetic operations Sum, Product and Division of two numbers*/
#include <stdio.h>

int main()
{
float a, b, Sum, Product, Division;
printf("Enter Value a\t");//Prompt the user to Enter a value for a
scanf("%f", &a);//Collect input values for a
printf("\nEnter Value b\t");//Prompt the user to Enter a value for b
scanf("%f", &b);//Collect input values for b
printf("\nSum=a+b");//Display the formula for Sum
Sum=a+b;//Calculate the sum
printf("\nProduct=a*b");//Display the formula for Product
Product=a*b;//Calculate the Product
printf("\nDivision=a/b");//Display the formula for Division
Division=a/b;//Divide the two numbers
printf("\nSum=%f", Sum);//Display the result for Sum
printf("\nProduct=%f", Product);//Display the Product
printf("\nDivision=%f", Division);//Dispay the result for Division
}

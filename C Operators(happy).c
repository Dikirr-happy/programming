#include <stdio.h>

int main()
{
    /*Arithmetic Operators*/
    printf("Arithmetic Operators");
    int x, b, Addition, Subtraction, Multiplication, Modulus;
    float Division;
    printf("\n Enter value for x \t");
    scanf("%d", &x);
    printf("\n Enter value for b \t");
    scanf("%d", &b);
    Addition=x+b;//It adds the two values
    Subtraction=x-b;//It finds the difference between the two values
    Multiplication=x*b;//It multiplies the two values
    Division=x/(float)b;/*Type Casting so that the value for
    Division will be in decimals. It does not change the
    pre-stated data type for value b*/
    Modulus=x%b;//It returns the remainder after dividing "x" with "b"
    printf("\n Addition=%d \t", Addition);//It displays the value for Addition
    printf("\n Subtraction=%d \t", Subtraction);//It displays the value for Subtraction
    printf("\n Multiplication=%d \t", Multiplication);//It displays the value for Multiplication
    printf("\n Division=%f \t", Division);//It displays the value for Division
    printf("\n Modulus=%d \t", Modulus);//It displays the value for Modulus

    /*Increment Operators*/
    printf("\n Increment Operators");
    //Print the values of x increment each time.
    //Used postfix mode for x and prefix mode for b.
    printf("\n %d \t", ++x);
    printf("\n %d \t", ++x);
    printf("\n %d \t", ++x);
    printf("\n %d \t", ++x);
    printf("\n %d \t", ++x);

    /*Decrement operators*/
    printf("\n Decrement operators");
    //Print the values of b decrement each time.
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);
    printf("\n %d \t", --b);

    /*Relational operators*/
    printf("\n Relational operators");
    if (x==b){//Check whether x is equal to b
        printf("\n x is equal to b");
    }else if (x!=b){//Check whether x is not equal to b
    printf("\n x is not equal to b");
    }
    if (x>b){//Check whether x is greater than b
        printf("\n x is greater than b");
    }else if (x<b){//Check whether x is less than b
    printf("\n x is less than b");
    }
    if (x>=b){//Check whether x is greater than or equal to b
        printf("\n x is greater than or equal to b");
    }else if (x<=b){//Check whether x is less than or equal to b
    printf("\n x is less than or equal to b");
    }

    /*Logical operators*/
    printf("\n Logical Operators");
    int g, n;
    do{
        printf("\n Enter value of g Between 1-10 \t");
    scanf("%d", &g);
    printf("\n Enter value of n Between 1-10 \t");
    scanf("%d", &n);
    }
    while ((g>10)||(n>10));
    printf("\n Logical AND");
    if ((g>=5)&&(g<=10)){
        printf("\n g is a value between 5 and 10");
    }else{
        printf("\n g is less than 5");
    }
    printf("\n Logical OR");
    if ((n>=5)||(n<=10)){
        printf("\n n is simply equal to or less than 10");
    }
    return 0;
}

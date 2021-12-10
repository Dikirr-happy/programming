#include <stdio.h>

int main()
{
  int q, w;
  printf("Enter values for q and w...THEY SHOULD BE BETWEEN 1 AND 10!!!");
  do{ 
    printf("\n Enter value for q \t");
    scanf("%d", &q);
    printf("\n Enter value for w \t");
    scanf("%d", &w);
}
  while (w>10||q>10);
	printf("\n Thank you for your participation in this small exercise");
}

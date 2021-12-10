#include<stdio.h>
int main()
{
    int a[5];
    int i;
    for (i=0; i<5; i++)
    {
        printf("\n Enter a[%d]", i);
        scanf("\n %d", &a[i]);
    }
    for (i=0; i<5; i++)
    {
        printf("\n a[%d]=%d", i, a[i]);
    }
    return 0;
}

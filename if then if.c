#include <stdio.h>
int main()
{
int math,bio,chem,eng,geo,average;
printf("enter marks for math,bio.chem,eng.geo");
scanf("%d %d %d %d %d",&math,&bio,&chem,&eng,&geo);
average=(math+bio+chem+eng+geo)/5;
	printf("average=%d", average);
if(average>=90&&average<=100)
{
printf("grade A");
}
else if(average>=80&&average<90)
{
printf("grade B");
}
else if(average>=70&&average<80)
{
printf(" grade C");
}
else if(average>=60&&average<70)
{
	printf("grade D");
	}
else if(average>=50&&average<60)
{
printf("grade E");
}
	else{
printf("failed");
	}

}

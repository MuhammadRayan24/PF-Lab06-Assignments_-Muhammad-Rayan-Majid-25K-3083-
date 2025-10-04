#include<stdio.h>
int main ()
{
	int num=0,r=0,arm=0,c;
	printf("\n Enter the number:");
	scanf("%d",&num);
	c=num;
	while(num>0)
	{
		r=num%10;
		arm+=r*r*r;
		num=num/10;
	}
	if(c==arm)
	printf("\n It is an Armstrong number!");
	else
	printf("\n Not an Armstrong number!");
	return 0;
}

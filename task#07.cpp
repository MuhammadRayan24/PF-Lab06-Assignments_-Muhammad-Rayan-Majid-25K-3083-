#include<stdio.h>
int main ()
{
	int amount=0, c25=0, c10=0, c5=0, c1=0;
	printf("\n Enter the amount:");
	scanf("%d",&amount);
	while (amount>0)
	{
		if (amount>=25)
		{
			amount-=25;
			c25++;
		}
		else if (amount >=10)
		{
			amount-=10;
			c10++;
		}
		else if (amount >=5)
		{
			amount-=5;
			c5++;
		}
		else 
		{
			amount-=1;
			c1++;
		}
	}
	printf("\n Minimum coins required:");
	printf("\n 25-cent coins: %d",c25);
	printf("\n 10-cent coins: %d",c10);
	printf("\n 5-cent coins: %d",c5);
	printf("\n 1-cent coins: %d",c1);
	return 0;
}

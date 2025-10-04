#include<stdio.h>
int main ()
{
	int num=0, i, t;
	printf("\n Enter the number!");
	scanf("%d",&num);
	printf("\n ==MULTIPLICATION TABLE==");
	for (i=1;i<=10;i++)
	{
	t=num*i;
	printf("\n %d*%d=%d", num, i, t);
    }	
    return 0;
}

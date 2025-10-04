#include<stdio.h>
int main ()
{
	int n;
	printf("\n Enter the number:");
	scanf("%d", &n);
	if(n&1)
	{
		printf ("\n %d is the odd number.",n);
	}
	else 
	{
		printf ("\n %d is the even number.",n);
	}
	return 0;
}

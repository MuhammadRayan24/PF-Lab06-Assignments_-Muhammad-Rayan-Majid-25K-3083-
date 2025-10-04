#include<stdio.h>
int main ()
{
	int i, n=0, f=1;
	printf("\n Enter the number of participants:");
	scanf("%d", &n);
	for (i=1; i<=n; i++)
	{
		f*=i;
	}
	printf("\n The factorial of %d is %d", n,f);
	return 0;
}

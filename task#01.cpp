#include<stdio.h>
int main ()
{
	int value=1, sum=0;
	printf ("\n Enter the value (0 will stop the loop!):");
	scanf ("%d", &value);
	while (value!=0)
	{
	sum+=value;
	printf ("\n The current sum is:%d",sum);
	printf("\n Enter next value: ");
	scanf ("%d", &value);
    }
    printf ("\n The final sum is:%d", sum);
    return 0;
}

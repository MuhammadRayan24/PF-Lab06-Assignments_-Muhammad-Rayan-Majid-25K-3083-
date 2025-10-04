#include<stdio.h>
int main ()
{
	int n=0, count=0;
	printf("\n Enter the number:");
	scanf("%d", &n);
	while (n != 0)
    {
        if (n & 1)  
            count++;
        n = n >> 1;  
    }
    printf("\nThe number of 1s in the binary form of this number is: %d", count);
return 0;
}

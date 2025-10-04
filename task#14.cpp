#include<stdio.h>
int main ()
{
	int n;
	printf("\n Enter the number");
	scanf("%d",&n);
	printf("\n Original number: %d", n);
	printf("\n Number multiplied by 2: %d", n<<1);
	printf("\n Number multiplied by 4: %d", n<<2);
	printf("\n Number multiplied by 8: %d", n<<3);
	return 0;
}

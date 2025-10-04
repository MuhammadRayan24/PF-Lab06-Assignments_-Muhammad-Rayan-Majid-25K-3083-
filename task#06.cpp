#include<stdio.h>
int main()
{
	int n, r, rev=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	while(n>0)
      {
      	r=n%10;
      	rev=rev*10+r;
      	n=n/10;
      }
      printf("The Reversed Number is %d", rev);
      return 0;
}

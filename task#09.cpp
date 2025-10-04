#include<stdio.h>
#include<math.h>
int main ()
{
	float pay=250.50, total=0;
	int people;
	printf("\n Enter the total number of people in group:");
	scanf("%d",& people);
	total=people*pay;
	total = ceil(total);
	printf("\n The total cost for the group is Rs. %.0f",total);
	return 0;
}

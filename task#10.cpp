#include<stdio.h>
#include<math.h>
int main ()
{
	float A=0, P=0, r=0, n=0, t=0;
	printf("\n Enter the Principal Amount 'P':");
	scanf("%f", &P);
	printf("\n Enter annual interest rate 'r':");
	scanf("%f", &r);
	printf("\n Enter the number of interest applied every year 'n':");
	scanf("%f", &n);
	printf("\n Enter number of years 't':");
	scanf("%f", &t);
	A = P * pow((1 + (r / n)), n * t);
	printf("\n The future value of investment = %.2f",A);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main ()
{
	float M=0, I=0, S=0;
	printf("\n Enter the intensity of the quake:");
	scanf("%f",&I);
	printf("\n Enter the standard reference value:");
	scanf("%f",&S);
	M=log10(I/S);
	printf("\n The magnitude of Earthquake = %.2f", M);
	return 0;
}

#include<stdio.h>
#include<math.h>
int main ()
{
	float h, angle , l;
	printf("\n Enter the height of building (in meters):");
	scanf("%f",&h);
	printf("\n Enter the angle of sun's elevation (in radians):");
	scanf("%f",&angle);
	angle=angle*M_PI/ 180;
	l=h/tan(angle);
	printf("\n The length of shadow is %.2f meters", l);
	return 0;
}

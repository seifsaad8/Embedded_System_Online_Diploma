#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float x, y, z;
	printf("Enter three numbers : ");
	fflush(stdout); fflush(stdin);
	scanf("%f %f %f", &x, &y, &z);
	if(x > y)
	{
		if(x > z)
			printf("Largest number = %f", x);
		else
			printf("Largest number = %f", z);
	}
	else
	{
		if(y > z)
			printf("Largest number = %f", y);
		else
			printf("Largest number = %f", z);
	}
}

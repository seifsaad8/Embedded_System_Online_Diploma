#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float x;
		printf("Enter a number : ");
		fflush(stdout); fflush(stdin);
		scanf("%f", &x);
		if (x > 0)
			printf("%f is positive.\n", x);
		else if (x < 0)
			printf("%f is negative.\n", x);
		else
			printf("You entered zero.\n");
		return 0;
}

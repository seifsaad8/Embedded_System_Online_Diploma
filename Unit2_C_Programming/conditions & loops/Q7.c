#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int x, fact = 1, i;
	printf("Enter an integer : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &x);

	if(x < 0)
		printf("Error! !! Factorial of negative number doesn't exist.");
	else
	{
		for (i = 1; i <= x; i++)
		{
			fact*= i;
		}
		printf("Factorial  = %d", fact);
	}

	return 0;
}

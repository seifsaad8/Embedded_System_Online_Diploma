#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int x, sum = 0, i;
	printf("Enter an integer : ");
	fflush(stdout); fflush(stdin);
	scanf("%d", &x);

	for (i = 1; i <= x; i++)
	{
		sum+= i;
	}
	printf("Sum  = %d", sum);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int num;
	printf("Enter an integer you want to check : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &num);
	if(num % 2 == 0)
		printf("%d is even", num);
	else
		printf("%d is odd", num);

	return 0;
}

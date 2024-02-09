#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int num1, num2;
	printf("Enter two integers : ");
	fflush(stdout);fflush(stdin);
	scanf("%d %d", &num1, &num2);
	printf("Sum : %d", num1 + num2);
	return 0;
}

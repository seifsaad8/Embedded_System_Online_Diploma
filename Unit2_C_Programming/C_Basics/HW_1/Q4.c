#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float num1, num2;
	printf("Enter two numbers : ");
	fflush(stdout);fflush(stdin);
	scanf("%f %f", &num1, &num2);
	printf("product : %f", num1 * num2);
	return 0;
}

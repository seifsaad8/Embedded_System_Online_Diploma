#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float num1, num2, temp;
	printf("Enter value of a : ");
	fflush(stdout);fflush(stdin);
	scanf("%f", &num1);

	printf("Enter value of b : ");
	fflush(stdout);fflush(stdin);
	scanf("%f", &num2);

	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("After swapping, value of a = %f\n", num1);
	printf("After swapping, value of b = %f\n",num2);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float nums[100], sum = 0.0, average;
	int n, i;

	printf("enter the numbers of data :");
	fflush(stdin);fflush(stdout);
	scanf("%d", &n);

	if (n > 100 || n <= 0)
	{
		printf("Error! number should in range of (1 to 100).\n");
		printf("enter the number again: ");
		scanf("%d", &n);
	}

	for (i = 0; i < n; i++)
	{
		printf("%d. enter number: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f", &nums[i]);
		sum += nums[i];
	}
	average = sum / n;
	printf("average = %f", average);

	return 0;
}

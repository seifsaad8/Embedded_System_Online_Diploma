#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	float arr1[2][2] = {0}, arr2[2][2] = {0};
	printf("enter the elements of 1st matrix\n");

	int i, j;
	/*entering the first array's elements*/
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("enter a%d%d : ",i, j);
			fflush(stdin);fflush(stdout);
			scanf("%f", &arr1[i][j]);
		}
	}
	/*entering the second array elements*/
	printf("Enter the elements of 2nd matrix\n");
	for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("enter a%d%d : ",i , j);
				fflush(stdin);fflush(stdout);
				scanf("%f", &arr2[i][j]);
			}
		}
	/*printing the sum of the matrices*/
	printf("sum of matrix is : \n");
	for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 2; j++)
			{
				printf("%.1f ", arr1[i][j] + arr2[i][j]);
			}
			printf("\n");
		}
	return 0;
}

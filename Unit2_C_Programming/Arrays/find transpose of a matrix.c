#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int  nums[10][10], rows, columns;

	/*take the number of rows and columns from user*/
	printf("Enter the number of rows: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &rows);
	printf("Enter the number of columns: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &columns);

	/*take the matrix form the user*/
	printf("enter the elements of matrix : \n");

	int i, j;
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			printf("enter element a%d%d : ", i, j);
			fflush(stdin);fflush(stdout);
			scanf("%d", &nums[i][j]);
		}
	}

	/*show the entered matrix*/
	printf("Entered matrix : \n");
	for(i = 0; i < rows; i++)
	{
		for(j = 0; j < columns; j++)
		{
			printf("%d ", nums[i][j]);
		}
		printf("\n");
	}

	/*print the transposed matrix*/
	printf("transpose of matrix : \n");

	for(i = 0; i < columns; i++)
	{
		for(j = 0; j < rows; j++)
		{
			printf("%d ", nums[j][i]);
		}
		printf("\n");
	}

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int arr[100], num, element, location, i;

	printf("enter the number of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be inserted : ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&element);
	printf("enter the location : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &location);

	for (i = num; i >= location; i--)
	{
		arr[i] = arr[i -1];
	}
	num++;
	arr[location-1] = element;

	for (i = 0; i < num; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

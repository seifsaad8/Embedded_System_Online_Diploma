#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int arr[100], num, i, element, location = 0;
	printf("enter the number of elements : ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);

	for(i = 0; i < num; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("enter the element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &element);

	for (i = 0; i < num; i++)
	{
		if(arr[i] == element)
		{
			location = i + 1;
			break;
		}
	}
	if(location == 0)
		printf("number not found");
	else
		printf("number found at the location = %d", location);
	return 0;
}

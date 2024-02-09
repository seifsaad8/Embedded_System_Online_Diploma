#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	int num;
	printf("Enter an integer : ");
	fflush(stdout);fflush(stdin);
	scanf("%d", &num);
	printf("You entered : %d", num);
	return 0;
}

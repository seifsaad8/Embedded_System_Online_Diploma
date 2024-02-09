#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char x;
	printf("Enter an alphabet : ");
	fflush(stdout); fflush(stdin);
	scanf("%c", &x);

	if((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
		printf("%c is an alphabet \n",x);
	else
		printf("%c is no an alphabet \n",x);
	return 0;
}

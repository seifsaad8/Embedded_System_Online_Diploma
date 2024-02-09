#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char ch;
	printf("Enter a character: ");
	fflush(stdout);fflush(stdin);
	scanf(" %c", &ch);
	printf("ASCII value of %c = %d", ch, ch);
	return 0;
}

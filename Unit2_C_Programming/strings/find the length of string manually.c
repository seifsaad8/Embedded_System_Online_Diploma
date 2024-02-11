#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char s[1000];
	int i, length = 0;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(s);

	for(i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	printf("length of string : %d", length);
	return 0;
}

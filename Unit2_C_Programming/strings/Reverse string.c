#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char s[100];
	int length, i, j;
	printf("Enter the string: ");
	fflush(stdin);fflush(stdout);
	gets(s);
	length = strlen(s);
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	printf("reversed string is: %s\n", s);
	return 0;
}

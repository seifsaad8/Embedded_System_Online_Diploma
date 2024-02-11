#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char s[1000], ch;
	int i, count = 0;
	printf("enter a string : ");
	fflush(stdin);fflush(stdout);
	gets(s);

	printf("enter a character to find its frequency ; ");
	fflush(stdin);fflush(stdout);
	scanf(" %c", &ch);

	for(i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == ch)
			count++;
	}
	printf("frequency fo %c is %d", ch, count);
	return 0;
}

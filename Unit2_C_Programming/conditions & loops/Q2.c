#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void)
{
	char c;
	printf("Enter an alphabet: ");
	fflush(stdout);fflush(stdin);
	scanf(" %c", &c);
	if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
		printf("%c is a vowel", c);
	else
		printf("%c is a constant", c);

	return 0;
}

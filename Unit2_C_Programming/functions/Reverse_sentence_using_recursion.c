#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Reverse_sen();

int main(void)
{
    printf("enter a sentence : ");
    fflush(stdin);fflush(stdout);
    Reverse_sen();

    return 0;

}

void Reverse_sen()
{
    char c;
    scanf("%c", &c);
    if(c != '\n')
    {
        Reverse_sen();
        printf("%c", c);
    }
}

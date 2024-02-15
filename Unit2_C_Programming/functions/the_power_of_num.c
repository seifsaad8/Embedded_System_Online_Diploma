#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int Power(int, int);

int main(void)
{
    int num, pow, res;
    printf("enter base number: ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);
    printf("enter power number (positive integer): ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &pow);

    res = Power(num, pow);
    printf("%d^%d = %d", num, pow, res);
    return 0;
}

int Power(int num, int pow)
{
    if(pow == 0)
    {
        return 1;
    }
    else
    {
        return num * Power(num, pow-1);
    }
}

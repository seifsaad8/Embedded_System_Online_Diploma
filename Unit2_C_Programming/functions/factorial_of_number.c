#include <stdio.h>

int fact_of_num(int);

int main(void)
{
    int num, res;

    printf("enter an positive integer : ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);

    res = fact_of_num(num);
    
    printf("factorial of %d is %d", num, res);

    return 0;
}

int fact_of_num(int num)
{
    if (num == 1)
    {
        return 1;
    }
    else
    {
        return num * fact_of_num(num - 1);
    }
}
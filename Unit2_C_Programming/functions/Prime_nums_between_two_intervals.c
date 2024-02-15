#include <stdio.h>
int Prime_Nums(int);
int main()
{
    int num1, num2, i, status;
    printf("Enter two numbers(intervals) : ");
    fflush(stdin);fflush(stdout);
    scanf("%d%d",&num1, &num2);
    
    printf("the prime numbers between %d & %d are : ", num1, num2);
    for (i = num1 + 1; i < num2; i++)
    {
        status = Prime_Nums(i);
        if(status == 0)
        {
            printf("%d ", i);
        }

    }
   
    return 0;
}


int Prime_Nums(int num)
{
    int j, status = 0;

    for(j = 2; j < num / 2; j++)
    {
        if(num % j == 0)
        {
            status = 1;
            break;
        }
    }
    return status;
}
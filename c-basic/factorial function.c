#include <stdio.h>

void factorialFunction(int num);

int main ()
{
    int num;
    factorialFunction(num);
    return 0;
}

void factorialFunction(int num)
{
    unsigned long long fact = 1;
    printf("Enter number :");
    scanf("%d",&num);
    
    if (num < 0)
    {
        printf("Not for nagative number ");
    }
    else
    {
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    printf("%d! = %llu",num, fact);
    }   
}
#include <stdio.h>

void checkmaxNumber();

int main ()
{
    checkmaxNumber();
    return 0;
}

void checkmaxNumber()
{
    int firstNum, secondNum;
    printf("Enter Two Number :");
    scanf("%d %d",&firstNum, &secondNum);

    if (firstNum > secondNum)
    {
        printf("Largest Number = %d", firstNum);
    }
    else
    {
         printf("%d", secondNum);
    }
}
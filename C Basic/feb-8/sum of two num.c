#include <stdio.h>

int sum (int num);

int main ()
{
    int num;
    printf("sum is %d", sum(num));
    return 0;
}

int sum (int num)
{
    int fristN, secondN;
    printf("Enter Two Number :");
    scanf("%d %d", &fristN, &secondN);

    return fristN + secondN;
}
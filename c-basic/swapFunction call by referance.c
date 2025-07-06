#include <stdio.h>

void swapFunction(int *num1, int *num2);

int main()
{
    int a, b;
    printf("A = ");
    scanf("%d",&a);
    printf("B = ");
    scanf("%d",&b);

    swapFunction(&a, &b);
    printf("A = %d, B = %d", a, b);

    return 0;
}

void swapFunction(int *num1, int *num2)
{
    int container;
    container = *num1;
    *num1 = *num2;
    *num2 = container;
}
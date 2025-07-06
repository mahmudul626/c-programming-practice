#include <stdio.h>

void reverseNumber(int num);

int main()
{
   int num;
   printf("Enter Number :");
   scanf("%d",&num);

    printf("Reverse Number :");
    reverseNumber(num);
    printf("\n");
    return 0;
}

void reverseNumber(int num)
{
    if (num == 0) return;
    printf("%d",num % 10);
    reverseNumber(num / 10);
}
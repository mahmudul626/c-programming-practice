#include <stdio.h>

int primeCheck(int num);

int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d",&num);

    if (primeCheck(num))
    {
        printf("%d is a prime number",num);
    } else {
        printf("%d is a composite number",num);
    }
    
    return 0;
}

int primeCheck(int num)
{
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++)
    {
       if (num % i == 0) return 0;
       
    }
    
    return 1;
}
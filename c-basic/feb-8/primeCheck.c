#include <stdio.h>

int checkPrime (int num);

int main ()
{
    int num;
    checkPrime(num);
    return 0;
}

int checkPrime (int num)
{
    printf("Enter Number :");
    scanf("%d", &num);

    if (num == 0) {
        printf("%d is zero",num);
    }
    else{

        if (num >= 1) {
            if (num % 2 == 0) {
                printf("%d is a prime number",num);
            } else {
                printf("%d is a not prime number",num);
            }
        } else {
            printf("%d is a nagative number",num);
        }
    }

}
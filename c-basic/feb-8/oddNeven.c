#include <stdio.h>

int checkoddEven (int num);

int main ()
{
    int num;
    checkoddEven(num);
    return 0;
}

int checkoddEven (int num)
{
    printf("Enter Number :");
    scanf("%d", &num);

    if (num == 0) {
        printf("%d is zero",num);
    }
    else{

        if (num >= 1) {
            if (num % 2 == 0) {
                printf("%d is a even number",num);
            } else {
                printf("%d is a odd number",num);
            }
        } else {
            printf("%d is a nagative number",num);
        }
    }

}
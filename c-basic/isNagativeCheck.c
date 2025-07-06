#include <stdio.h>

int ckNagNum (int num);

int main ()
{
    int num;
    printf("%d",ckNagNum(num));
    return 0;
}

int ckNagNum (int num) {
    printf("Enter Number: ");
    scanf("%d",&num);

    if (num>0) {
       return 1;
    }
    else {
        return 0;
    }
    
}
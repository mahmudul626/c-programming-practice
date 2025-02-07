#include <stdio.h>

void voterCheck();

int main ()
{
    voterCheck();
   return 0; 
}

void voterCheck()
{
    int year;
    printf("How old are you ? \n");
    printf("Ans :");
    scanf("%d",&year);

    if (year >= 18)
    {
        printf("You can vote!",year);
    }
    else
    {
        printf("You can't vote!",year);
    }
    
}
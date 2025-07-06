#include <stdio.h>

int main()
{
    int x = 5, y = 3;
    printf("Before : x = %d y = %d \n",x,y);
    
    if (x != y)
    {
        x = x ^ y;
        y = x ^ y;
        x = x ^ y;
        printf("After : x = %d y = %d", x,y);
    }
    
    return 0;
}
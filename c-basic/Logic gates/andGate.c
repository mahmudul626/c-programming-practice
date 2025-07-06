#include <stdio.h>

int andGate (int inp1, int inp2);

int main ()
{
    int inp1, inp2;
    printf("Output : %d",andGate(inp1,inp2));
    return 0;
}

int andGate (int inp1, int inp2)
{
    printf("Enter two input :");
    scanf("%d %d", &inp1, &inp2);

    if (inp1 && inp2 == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
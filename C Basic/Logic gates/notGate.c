#include <stdio.h>

int notGate (int input);

int main ()
{
    int input;
    printf("Output : %d",notGate(input));
    return 0;
}

int notGate (int input)
{
    printf("Enter input : ");
    scanf("%d", &input);

    if (input == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
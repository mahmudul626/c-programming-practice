#include <stdio.h>

int  main ()
{
    int input, n, limit = 3, secretNum = 5;
    printf("\t Number Guessing Game \n");
    for (int i = 0; i < n; i++)
    {
        printf("Chance : %d time \n", limit);
        printf("Enter number : ");
        scanf("%d", &input);
            if (input != secretNum)
                {
                   limit --;
                   if (limit == 0) {
                    printf("Out of limit");
                    break;
                   } else if (secretNum < input)
                   {
                    printf("%d is too high \n", input);
                   } else if (secretNum > input)
                   {
                    printf("%d is too low \n", input);
                   }
                } else {
                    printf("You win");
                    break;
                }
    }
    return 0;
}
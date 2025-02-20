#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main ()
{
    int input, limit = 3;
    srand(time(0));
    int secretNum = rand() % 10 + 1;
    printf("\t Number Guessing Game \n");
    for (int i = 0; i < 10; i++)
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

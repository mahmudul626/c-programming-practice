#include <stdio.h>
#include <ctype.h>

int main ()
{
    char letter[1000];
    printf("Enter :");
    fgets(letter,sizeof(letter),stdin);

    for (int i = 0; letter[i] != '\0'; i++)
    {
        if (isupper(letter[i])) 
        {
            printf("%c",letter[i]);
        }
        
    }
    
   return 0; 
}
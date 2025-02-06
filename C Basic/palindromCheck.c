#include <stdio.h>
#include <string.h>

void palindromCheck(char str[100]); // function defination

int main()
{
    char str[100];
    palindromCheck(str); //function call
    return 0;
}

void palindromCheck(char str[100]) // function declearation
{
    int len, flag = 0; 
    printf("Enter String :");
    scanf("%s",str); //user input and se input str variable e bosiye deuya hoyeche

    len = strlen(str); //strlen function dara str e koita songkha ache, se songkha guluke len variable e bosiye deuya hoyeche
    
    for (int i = 0; i < len / 2; i++) // i 0 theke ( len - 1 ) porjonto colte thakbe
    {
       if (str[i] != str[len - i - 1]) // str[i] er man holo (len - 1) = jeta hobe seta.str[len - i - 1] er man len er man - i er man - 1
      // str[i] != str[len - i - 1] ey 2tar man jodi soman na hoi tahole flag er man poriborton kore 1 kore dibe. 
      // soman hole flag er man ja set kora chilo tai e thakbe.
       {
        flag = 1;
        break;
       }
       
    }

    if (flag == 0) //flag er man jodi na poriborton hoi tahole str ti palindrom ar flag er man 1 hole str ti not palindrom.
    {
        printf("%s is a palindrom",str);
    } else {
        printf("%s is not a palindrom",str);
    }
    
}
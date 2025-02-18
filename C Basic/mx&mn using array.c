#include <stdio.h>

int main ()
{
    int arr[5];
    printf("Enter 5 number:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0], min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }  
    }
    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    
    printf("Maximum : %d \t", max);
    printf("Minimum : %d \t", min);
    return 0;
}
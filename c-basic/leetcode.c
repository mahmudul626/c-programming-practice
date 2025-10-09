#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target) {
    
    for (int i = 0; i < numsSize; i++)
    {
        int count = *(nums+i) + *(nums+i+1);
        if (count == target)
        {
            return (int) i, i+1;
        }
        
    }
    
}


int main() {
    int i, *arr, target;
    scanf("%d", &i);
    arr = (int *) malloc (i * sizeof(int));
    scanf("%d", &target);

    
    printf("%d,%d", twoSum(*arr, i, target) );
    return 0;
}
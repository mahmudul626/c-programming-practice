#include <stdio.h>

int isDivisible(int firstNum, int secondNum);

int main()
{
    int firstNum, secondNum;
    printf("%d", isDivisible(firstNum,secondNum));
    return 0;
}

int isDivisible(int firstNum, int secondNum) {
    printf("Enter Two Number: ");
    scanf("%d %d", &firstNum, &secondNum);

    if (firstNum % secondNum == 0) {
        return 1;
    } else {
        return 0;
    }
    
}
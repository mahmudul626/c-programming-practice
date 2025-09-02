/*
    Problem: Diagonal Difference

    Given a square matrix, calculate the absolute difference between the sums of its diagonals.

    Example:
        Matrix:
            1 2 3
            4 5 6
            9 8 9  

        Left-to-right diagonal = 1 + 5 + 9 = 15
        Right-to-left diagonal = 3 + 5 + 9 = 17

        Absolute difference = |15 - 17| = 2

    Function Description:
        Complete the function with the following parameter:
            arr: a 2-D array of integers

        Return:
            The absolute difference in sums along the diagonals.

    Input Format:
        - The first line contains a single integer n (size of the square matrix).
        - Each of the next n lines contains n space-separated integers (the elements of the matrix).

    Constraints:
        -100 <= arr[i][j] <= 100

    Sample Input:
        3
        11 2 4
        4 5 6
        10 8 -12

    Sample Output:
        15

    Explanation:
        Primary diagonal: 11 + 5 + (-12) = 4
        Secondary diagonal: 4 + 5 + 10 = 19
        Absolute difference = |4 - 19| = 15
*/



#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n][n];

    int firstSum = 0, secondSum = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
         firstSum += arr[i][i];
    }
    for (int i = 0, j = n-1; i < n, j >= 0; j-- , i++)
    {
         secondSum += arr[i][j];
    }
    // printf("%d", firstSum);
    // printf("\n");
    // printf("%d", secondSum);
    // printf("\n");
    int positive = abs(firstSum - secondSum);
    printf("%d", positive);
    
    return 0;

}
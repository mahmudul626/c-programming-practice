/*
Problem: Divisible Sum Pairs

Given an array of integers and a positive integer k, find the number of pairs (i, j) such that:
- i < j
- (ar[i] + ar[j]) is divisible by k (i.e., (ar[i] + ar[j]) % k == 0)

Input:
- First line contains two integers n (size of array) and k (the divisor)
- Second line contains n space-separated integers representing the array elements

Output:
- Print the number of valid pairs satisfying the above condition.

Example:
Input:
6 3
1 3 2 6 1 2

Output:
5

Explanation:
The valid pairs are:
(0,2), (0,5), (1,3), (2,4), (4,5)
where indices are 0-based.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, *arr,count = 0;
    scanf("%d %d", &n, &k);
    arr = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", arr+i);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if ((*(arr+i) + *(arr+j)) % k == 0) count++;
        }  
    }
    printf("%d", count);
    return 0;
}

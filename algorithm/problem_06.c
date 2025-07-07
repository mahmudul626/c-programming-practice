/*
    🧠 Problem Statement: Mini-Max Sum

    Given five positive integers, your task is to calculate the minimum and maximum 
    values that can be made by summing exactly four out of the five integers.

    For example: if the input is → 1 2 3 4 5

    Then the sums of four out of five elements are:
    - Excluding 1 → 2+3+4+5 = 14
    - Excluding 2 → 1+3+4+5 = 13
    - Excluding 3 → 1+2+4+5 = 12
    - Excluding 4 → 1+2+3+5 = 11
    - Excluding 5 → 1+2+3+4 = 10

    So, the minimum sum is 10 and the maximum sum is 14.

    ⚠️ Note:
    - The numbers can be large, so use 64-bit integers (like `long long` in C).
    - A smart way is: calculate the total sum once, and subtract each element 
      to get the sum of the other four.

    ✅ Output: Two space-separated integers — the min sum and the max sum.
*/


#include <stdio.h>

int main() {
    long long array[5];
    int size = sizeof(array) / sizeof(array[0]);
    for(int i = 0; i < size; i++) 
        scanf("%lld", &array[i]);

    long long count[size];

    for (int i = 0; i < size; i++) {
        count[i] = 0;
        for(int j = 0; j < size; j++) {
            count[i] += array[j];
        }
        count[i] -= array[i];
    }

    long long max = count[0];
    long long min = count[0];

    for (int i = 0; i < size; i++) {
        if (max < count[i]) max = count[i];
        if (min > count[i]) min = count[i];
    }

    printf("%lld %lld\n", min, max);
    return 0;
}
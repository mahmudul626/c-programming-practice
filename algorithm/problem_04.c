/*
    Problem: Two Sum

    Given an array of integers `nums` and an integer `target`,
    find two indices `i` and `j` such that:
        nums[i] + nums[j] == target
    and i ≠ j.

    Return the indices i and j (in any order) as the output.

    Example:
        Input: nums = [3, 3], target = 6
        Output: 0, 1
        Explanation: Because nums[0] + nums[1] == 6

    Constraints:
        - Exactly one solution exists
        - Do not use the same element twice
        - Array length >= 2
*/


#include <stdio.h>

int main() {
    int nums[] = {3,3}, target = 6;
    int size = sizeof(nums) / sizeof(nums[0]);
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        
        count = *(nums+i) + *(nums+i+1);
        if (count == target)
        {
            printf("%d,%d", i, i+1);
        }

        
    }
    return 0;
}

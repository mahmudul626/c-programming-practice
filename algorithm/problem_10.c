/*
Problem Statement:

A character is running in a hurdle race. The hurdles are of different heights,
and the character has a maximum jump height (k). 
There is also a magic potion available. 
- Each dose of the potion increases the character's jump height by 1 unit.
- We need to find out the minimum number of doses required so that the 
  character can jump over ALL the hurdles.

If the character can already clear all the hurdles without the potion,
the answer should be 0.

Function Description:
---------------------
hurdleRace has the following parameters:
    int k       : the maximum height the character can jump naturally
    int height[n] : an array containing the heights of each hurdle

Returns:
    int : the minimum number of potion doses required (0 or more)

Input Format:
-------------
- First line: Two integers n (number of hurdles) and k (maximum natural jump height)
- Second line: n space-separated integers representing the height of each hurdle

Constraints:
------------
- 1 <= n <= 100
- 1 <= k <= 100
- 1 <= height[i] <= 100

Sample Input 0:
---------------
5 4
1 6 3 5 2

Sample Output 0:
----------------
2

Explanation:
------------
The tallest hurdle is 6 units high.
The character can naturally jump 4 units.
So, he needs (6 - 4) = 2 doses of potion.

Sample Input 1:
---------------
5 7
2 5 4 5 2

Sample Output 1:
----------------
0

Explanation:
------------
The tallest hurdle is 5 units high.
The character can naturally jump 7 units, which is already enough.
So, no potion is needed (0 doses).
*/




#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,k,*arr;
    scanf("%d %d", &n ,&k);
    arr = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr+i);
    }
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < *(arr+i))
        {
            max = *(arr+i);
        }
        
    }

    if (max > k)
    {
        printf("%d", max - k);
    } else {
        printf("0");
    }

    return 0;
}
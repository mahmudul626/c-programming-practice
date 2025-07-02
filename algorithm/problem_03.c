/*
    Problem: Apple and Orange

    Description:
    Sam's house is located between points 's' and 't' on the x-axis.
    There is an apple tree at point 'a' (left side of the house),
    and an orange tree at point 'b' (right side of the house).

    Each fruit (apple or orange) falls a certain distance from its tree.
    - If the distance is positive, the fruit falls to the right.
    - If negative, it falls to the left.

    Task:
    Count how many apples and oranges fall on Sam's house (i.e., between points s and t, inclusive).

    Input:
    - Integers s and t: house range
    - Integers a and b: positions of the apple and orange trees
    - Arrays of integers: distances each apple and orange falls from their trees

    Output:
    - First line: number of apples on Sam's house
    - Second line: number of oranges on Sam's house

    Example Input:
    7 11
    5 15
    3 2
    -2 2 1
    5 -6

    Example Output:
    1
    1

    Explanation:
    - Apples fall at: 3, 7, 6 → only one (7) is on the house
    - Oranges fall at: 20, 9 → only one (9) is on the house
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int s,t,a,b,apple,orange,*apple_dis,*orange_dis, apple_count = 0, orange_count = 0;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &apple, &orange);
    apple_dis = (int *) malloc(apple * sizeof(int));
    orange_dis = (int *) malloc(orange * sizeof(int));

    for (int i = 0; i < apple; i++)
    {
        scanf("%d", apple_dis + i);
    }
    for (int i = 0; i < orange; i++)
    {
        scanf("%d", orange_dis + i);
    }
    
    for (int i = 0; i < apple; i++)
    {
        int sum = a + *(apple_dis+i);
        if (sum >= s && sum <= t)
        {
            apple_count++;
        }
        
    }
    for (int i = 0; i < orange; i++)
    {
        int sum = b + *(orange_dis+i);
        if (sum >= s && sum <= t)
        {
            orange_count++;
        }
        
    }
    printf("%d\n%d\n", apple_count, orange_count);
    return 0;
}

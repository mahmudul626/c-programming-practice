/*
    Problem: Viral Advertising

    HackerLand Enterprise is adopting a viral advertising strategy.
    On the first day, they share the advertisement with exactly 5 people.

    Rules:
    - Every day, half of the recipients (rounded down) like the ad.
    - Each person who likes the ad shares it with 3 new friends.
    - No one receives the advertisement more than once.

    Example (if n = 3):

    Day 1:
        Shared = 5
        Liked = floor(5 / 2) = 2
        Cumulative Likes = 2

    Day 2:
        Shared = 2 * 3 = 6
        Liked = floor(6 / 2) = 3
        Cumulative Likes = 2 + 3 = 5

    Day 3:
        Shared = 3 * 3 = 9
        Liked = floor(9 / 2) = 4
        Cumulative Likes = 5 + 4 = 9

    Input:
        A single integer n (1 ≤ n ≤ 50) — the number of days the campaign runs.

    Output:
        Return the total number of likes at the end of day n.

    Sample:
    Input: 3
    Output: 9
*/


#include <stdio.h>
#include <stdlib.h>

int main() {

    int day; scanf("%d", &day);

    int ad = 5, liked = 0, comulative = 0;

    for (int i = 0; i < day; i++)
    {
        liked = ad / 2;
        comulative += liked;
        ad = 3 * liked;
    }
    printf("%d\n", comulative);
    return 0;
}
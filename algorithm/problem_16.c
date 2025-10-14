/*
Problem: Number Line Jumps

You are choreographing a circus show with two kangaroos on a number line ready to jump in the positive direction (toward positive infinity).

- The first kangaroo starts at location x1 and moves at a rate of v1 meters per jump.
- The second kangaroo starts at location x2 and moves at a rate of v2 meters per jump.

You need to figure out whether both kangaroos can land on the same location after making the same number of jumps.

If it is possible, print "YES".
Otherwise, print "NO".

Example:
---------
x1 = 0, v1 = 3
x2 = 4, v2 = 2

After 4 jumps, both kangaroos land at position 12.
So, the answer is "YES".

Function Description:
---------------------
Complete the function kangaroo in the editor below.

kangaroo has the following parameter(s):
    int x1, int v1: starting position and jump distance for kangaroo 1
    int x2, int v2: starting position and jump distance for kangaroo 2

Returns:
    string: either "YES" or "NO"

Input Format:
-------------
A single line of four space-separated integers:
x1 v1 x2 v2

Constraints:
-------------
0 ≤ x1 < x2 ≤ 10000
1 ≤ v1 ≤ 10000
1 ≤ v2 ≤ 10000

Sample Input 0:
---------------
0 3 4 2

Sample Output 0:
----------------
YES

Explanation 0:
--------------
The two kangaroos jump through the following sequence of locations:
Kangaroo 1: 0 → 3 → 6 → 9 → 12
Kangaroo 2: 4 → 6 → 8 → 10 → 12

They meet at location 12 after 4 jumps, so we print "YES".

Sample Input 1:
---------------
0 2 5 3

Sample Output 1:
----------------
NO

Explanation 1:
--------------
The second kangaroo starts ahead and jumps farther each time.
So the first kangaroo will never catch up, and we print "NO".
*/



#include <stdio.h>


int main() {
    int x1, v1, x2 ,v2;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if (v1 > v2 && (x2 - x1) % (v1 - v2) == 0)
    printf("YES\n");
    else
    printf("NO\n");

     
    return 0;
}
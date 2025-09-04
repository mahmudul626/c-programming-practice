/*
-----------------------------------------------------------
Problem: Cats and a Mouse | HackerRank

Two cats and a mouse are at various positions on a line.
You will be given their starting positions. 
Your task is to determine which cat will reach the mouse first,
assuming the mouse does not move and the cats travel at equal speed. 

If the cats arrive at the same time, the mouse will be allowed to 
move and it will escape while they fight.

-----------------------------------------------------------
Function Description:
Complete the function catAndMouse with the following parameters:

    int x: Cat A's position
    int y: Cat B's position
    int z: Mouse C's position

Returns:
    string: Either "Cat A", "Cat B", or "Mouse C"

-----------------------------------------------------------
Rules:
- If Cat A catches the mouse first, print "Cat A"
- If Cat B catches the mouse first, print "Cat B"
- If both cats reach the mouse at the same time, print "Mouse C"

-----------------------------------------------------------
Input Format:
- The first line contains a single integer q, denoting the number of queries.
- Each of the next q lines contains three space-separated integers
  describing the respective positions of Cat A (x), Cat B (y), and Mouse (z).

-----------------------------------------------------------
Constraints:
- All positions are integers within the given limits of HackerRank.

-----------------------------------------------------------
Sample Input:
2
1 2 3
1 3 2

Sample Output:
Cat B
Mouse C

Explanation:
Query 0: 
Positions are: Cat A = 1, Cat B = 2, Mouse = 3
|Cat A - Mouse| = 2, |Cat B - Mouse| = 1
So, Cat B reaches first → Output: Cat B

Query 1:
Positions are: Cat A = 1, Cat B = 3, Mouse = 2
|Cat A - Mouse| = 1, |Cat B - Mouse| = 1
Both cats reach at the same time → Output: Mouse C
-----------------------------------------------------------
*/



#include <stdio.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int arr[n][3];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        int catA = abs(arr[i][2] - arr[i][0]);
        int catB = abs(arr[i][2] - arr[i][1]);

        if (catA > catB) {
            printf("Cat B\n");
        } else if (catA == catB) {
            printf("Mouse C\n");
        } else {
            printf("Cat A\n");
        }
    }

    return 0;
}
    
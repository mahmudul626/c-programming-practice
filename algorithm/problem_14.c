/*
Problem: Electronics Shop (HackerRank)

A person wants to determine the most expensive computer keyboard and USB drive 
that can be purchased with a given budget. 
Given price lists for keyboards and USB drives and a budget, 
find the cost to buy them. 
If it is not possible to buy both items, return -1.

Function Description:
---------------------
Complete the getMoneySpent function in the editor below.

getMoneySpent has the following parameter(s):
    - int keyboards[n]: the keyboard prices
    - int drives[m]: the drive prices
    - int b: the budget

Returns:
    - int: the maximum that can be spent, or -1 
           if it is not possible to buy both items.

Input Format:
-------------
- The first line contains three space-separated integers b, n, and m:
    b → the budget
    n → the number of keyboard models
    m → the number of USB drive models
- The second line contains n space-separated integers (keyboard prices).
- The third line contains m space-separated integers (USB drive prices).

Constraints:
------------
- The price of each item is in the inclusive range [1, 10^6].

Sample Input 0:
---------------
10 2 3
3 1
5 2 8

Sample Output 0:
----------------
9

Explanation 0:
--------------
Buy the keyboard (3) and the USB drive (6) for a total cost of 9.

Sample Input 1:
---------------
5 1 1
4
5

Sample Output 1:
----------------
-1

Explanation 1:
--------------
There is no way to buy one keyboard and one USB drive within budget.
*/


#include <stdio.h>
#include <stdlib.h>


int main() {
    int b, n , m, *key, *usb;
    scanf("%d %d %d", &b, &n, &m);
    key = (int * ) malloc(n * sizeof(int));
    usb = (int * ) malloc(m * sizeof(int));


    for (int i = 0; i < n; i++) scanf("%d", key+i);
    for (int i = 0; i < m; i++) scanf("%d", usb+i);


    int good_rate = -1;

    for (int i = 0; i < n ; i++)
    {
        for(int j = 0; j < m; j++)  
        {
           int sum = *(key+i) + *(usb+j);
            if (sum <= b && sum > good_rate)
            {
                good_rate = sum;
            }
        }
    }
    
    printf("%d\n", good_rate);
    return 0;
}
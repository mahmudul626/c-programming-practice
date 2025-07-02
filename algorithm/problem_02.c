/*
    Problem Name: Bon Appetit

    Anna and Brian went out to dinner. They agreed to split the bill equally.
    However, Anna didn’t eat one of the items (at index k), so she shouldn’t pay for it.

    Brian calculated Anna’s share and charged her an amount b.
    Your task is to check if Brian calculated it correctly.

    Input:
    → First line: Two integers, n (number of items) and k (the 0-based index of the item Anna didn’t eat)
    → Second line: n space-separated integers, representing the cost of each item
    → Third line: Integer b, the amount Brian charged Anna

    Output:
    → If Brian calculated correctly, print "Bon Appetit"
    → If not, print the amount Brian must refund to Anna (i.e., b - Anna's actual share)

    Example:
    Input:
        4 1
        3 10 2 9
        12
    Output:
        5

    Explanation:
    Anna didn’t eat item 1 (cost 10), so her share is:
    (3 + 2 + 9) / 2 = 7
    Brian charged 12, so he owes Anna: 12 - 7 = 5
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int item_num, dont_eat, *item_price, money;
    scanf("%d %d", &item_num, &dont_eat);
    item_price = (int *) malloc(item_num * sizeof(int));

    for (int i = 0; i < item_num; i++)
    {
        scanf("%d", item_price+i);
    }
    scanf("%d", &money);
    int count = 0;

    for (int i = 0; i < item_num; i++)
    {
        count += *(item_price+i);
    }
    count -= item_price[dont_eat];
    count /= 2;
    count = money - count;

    if (count == 0)
    {
        printf("Bon Appetit");
    }else {
        printf("%d", count);
    }
    free(item_price);
    return 0;
}

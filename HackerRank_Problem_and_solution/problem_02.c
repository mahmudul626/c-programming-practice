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
    return 0;
}
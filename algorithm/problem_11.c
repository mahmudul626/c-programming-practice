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
    
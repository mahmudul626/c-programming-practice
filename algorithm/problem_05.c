#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k, *arr,count = 0;
    scanf("%d %d", &n, &k);
    arr = (int *) malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", arr+i);

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if ((*(arr+i) + *(arr+j)) % k == 0) count++;
        }  
    }
    printf("%d", count);
    return 0;
}
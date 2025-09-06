/*
Problem: Jumping on the Clouds: Revisited

A child is playing a cloud hopping game. There is a sequence of clouds numbered from 0 to n-1.
Each cloud is either:
    0 = cumulus cloud (safe)
    1 = thundercloud (dangerous)

The child starts at cloud 0 with an initial energy of 100 units. 
The child jumps in steps of size k in a circular path (wrap around using modulo n).

Rules:
1. Each jump costs 1 energy unit.
2. Landing on a thundercloud (1) costs an additional 2 energy units (total 3 for that jump).
3. The game ends when the child returns to cloud 0.

Input:
- First line: two integers n and k (number of clouds, jump distance)
- Second line: n space-separated integers c[i] (0 or 1) representing clouds

Output:
- Single integer: the remaining energy after the game ends

Example:
Input:
8 2
0 0 1 0 0 1 1 0

Step by step simulation:
- Start at cloud 0, energy = 100
- Jump to cloud 2 (thundercloud), energy -= 3 -> 97
- Jump to cloud 4 (cumulus), energy -= 1 -> 96
- Jump to cloud 6 (thundercloud), energy -= 3 -> 93
- Jump to cloud 0 (cumulus), energy -= 1 -> 92
Output: 92
*/

#include <stdio.h>


int main() {
    int n, k, energy = 100;
    scanf("%d %d", &n, &k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int jump = 0;
    

    for (;;)
    {
        jump = (jump + k) % n;
        energy --;

        if (arr[jump] == 1)
        {
            energy -= 2;
        }
        if(jump == 0) break;
        
        
    }
    
    printf("%d \n", energy);
    return 0;
}
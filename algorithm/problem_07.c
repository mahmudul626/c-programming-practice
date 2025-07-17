/* A professor decides to cancel class if fewer than a certain number of students are on time.

    ▪️ Input:
    First line: T – number of test cases.
    For each test case:
      - Two integers n and k (number of students, threshold for class to go on)
      - A line with n integers: arrival times of students
        - ≤ 0 means student is on time
        - > 0 means student is late

    ▪️ Output:
    Print "YES" if the class is cancelled (not enough on-time students), otherwise print "NO".

    ▪️ Sample Input:
    2
    4 3
    -1 -3 4 2
    4 2
    0 -1 2 1

    ▪️ Sample Output:
    YES
    NO
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Input how many tests the user takes.
    int test; scanf("%d", &test);
    for(int i = 0; i < test; i++) {
    int students, profDemand, *arrivalTime, arrived_on_time = 0; scanf("%d %d", &students, &profDemand);
    arrivalTime = (int *) malloc(students * sizeof(int));
    if (arrivalTime == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    for (int i = 0; i < students; i++) scanf("%d", arrivalTime+i);
    //If students are late, count the numbers.
    for (int i = 0; i < students; i++) if (*(arrivalTime+i) <= 0) arrived_on_time ++;
    // If the professor's demand exceeds the number of students who arrive on time, the class will be canceled.
    if (profDemand <= arrived_on_time) printf("NO\n"); else printf("YES\n");
    // Free "arrivalTime" memory
        free(arrivalTime);
}
    return 0;
}
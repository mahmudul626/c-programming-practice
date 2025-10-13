/*
===========================================================
Problem: Grading Students
Source: HackerRank (Algorithms > Implementation)

HackerLand University has the following grading policy:

- Every student receives a grade in the inclusive range from 0 to 100.
- Any grade less than 40 is a failing grade.

Sam is a professor at the university and likes to round each student's grade 
according to these rules:

1. If the difference between the grade and the next multiple of 5 
   is less than 3, round up to the next multiple of 5.
2. If the value of the grade is less than 38, no rounding occurs 
   as the result will still be a failing grade.

Examples:
----------
grade = 84 → round to 85 (85 - 84 = 1 < 3)
grade = 29 → do not round (result is less than 38)
grade = 57 → do not round (60 - 57 = 3, not less than 3)

Given the initial value of grades for each of Sam's students, 
write code to automate the rounding process.

Function Description:
---------------------
Complete the function gradingStudents with the following parameter(s):
    int grades[n]: the grades before rounding

Returns:
    int[n]: the grades after rounding

Input Format:
-------------
The first line contains a single integer, n, the number of students.
Each of the next n lines contains a single integer, grades[i].

Constraints:
------------
1 <= n <= 60
0 <= grades[i] <= 100

Sample Input 0:
---------------
4
73
67
38
33

Sample Output 0:
----------------
75
67
40
33

Explanation 0:
--------------
Student 1 received a 73, and the next multiple of 5 from 73 is 75.
Since 75 - 73 = 2 < 3, the student's grade is rounded to 75.

Student 2 received a 67, and the next multiple of 5 from 67 is 70.
Since 70 - 67 = 3 (not less than 3), the grade is not modified.

Student 3 received a 38, and the next multiple of 5 is 40.
Since 40 - 38 = 2 < 3, the student's grade is rounded to 40.

Student 4 received a 33, which is below 38, 
so the grade is not modified.
===========================================================
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr;
    scanf("%d", &n);
    arr = (int *) malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++) {
        scanf("%d", arr+i);
    }
    
    for(int i = 0; i < n; i++) {
        int grade = arr[i];
    int nextMultiple = ((grade / 5) + 1) * 5;
    int diff = nextMultiple - grade;

    if (grade >= 38 && diff < 3)
        arr[i] = nextMultiple;
    }
    
    
    for(int i = 0; i < n; i++) {
        printf("%d\n", *(arr+i));
    }
    free(arr);
    return 0;
}

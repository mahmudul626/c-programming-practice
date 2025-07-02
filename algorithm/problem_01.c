/*
===============================================================================
🔰 Problem Overview: Breaking the Records (Maria's Basketball Performance)
===============================================================================

Maria plays a number of basketball games each season and keeps track of her scores.
She wants to find out how many times during the season she breaks:
    ✅ Her **highest score record** (if a score is higher than all previous scores)
    ✅ Her **lowest score record** (if a score is lower than all previous scores)

🔹 The first game sets both the initial highest and lowest records.
🔹 Then, for each following game:
     🔸 If score > current_max ➝ increase max record break count
     🔸 If score < current_min ➝ increase min record break count

📥 Input:
    ▸ Integer n: number of games played
    ▸ Integer array scores[n]: scores in each game (in the order played)

📤 Output:
    ▸ Two integers:
        ➤ Number of times the max score record was broken
        ➤ Number of times the min score record was broken

🧠 Example:
    Input:
        9
        10 5 20 20 4 5 2 25 1
    Output:
        2 4

    Explanation:
        ▸ Maria broke her max record 2 times: (20 and 25)
        ▸ She broke her min record 4 times: (5, 4, 2, 1)

🎯 Key Concepts Practiced:
    - Array traversal
    - Conditional logic
    - Counters for tracking changes

*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    int game, *score, max_record_break = 0, min_record_break = 0;
    scanf("%d", &game);
    score = (int *) malloc(game * sizeof(int));

    for (int i = 0; i < game; i++)
    {
        scanf("%d", score + i);
    }

    int max_record = score[0];
    int min_record = score[0];


    for (int i = 0; i < game; i++)
    {
        if (*(score+i) > max_record)
        {
            max_record = *(score+i);
            max_record_break++;
        } else if (*(score+i) < min_record)
        {
            min_record = *(score+i);
            min_record_break++;
        }
    }
    
    printf("%d %d", max_record_break, min_record_break);
    free(score);
    return 0;
}
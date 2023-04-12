// Wap to read a two-dimensional array marks which stores marks of 4 students
// in 4 subjects . Wap to display the highest marks in each subject .
#include <stdio.h>
int main()
{
    int marks[4][4];
    int i, j, max;
    printf("Enter the marks of %d students in %d subjects:\n", 4, 4);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            scanf("%d", &marks[i][j]);
        }
    }
    for (j = 0; j < 4; j++)
    {
        max = marks[0][j];
        for (i = 1; i < 4; i++)
        {
            if (marks[i][j] > max)
            {
                max = marks[i][j];
            }
        }
        printf("Highest marks in subject %d: %d\n", j+1, max);
    }

    return 0;
}

//calculate the grade of the student according to the specified marks in c
# include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks?\n");
    scanf("%d",&marks);
    if(marks>85&&marks<=100)
    {
        printf("Congratulations!,you scored A grade\n");
    }
    else if(marks>60&&marks<=85)
    {
        printf("You scored B+\n");
    }
    else if(marks>40&&marks<=60)
    {
        printf("You scored B\n");
    }
    else if (marks>30 && marks<=40)
    {
        printf("You scored C\n");
    }
    else
    {
    printf("Sorry, You aren fail\n");
    }

    return 0;

}

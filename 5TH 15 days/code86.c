// program using referential structure using arrow operator. 
#include <stdio.h>

struct Student
{
    char name[50];
    int rollNo;
    int marks[5];
    float percentage;
};

void Details(struct Student *s)
{
    printf("Enter student name: ");
    scanf("%s", &s->name);
    printf("Enter student roll number: ");
    scanf("%d", &s->rollNo);
    printf("Enter marks for 5 subjects: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &s->marks[i]);
    }
}

void Percentage(struct Student *s)
{
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += s->marks[i];
    }
    s->percentage = (float)total / 5.0;
}

void display(const struct Student *s)
{
    printf("Name: %s\n", s->name);
    printf("Roll Number: %d\n", s->rollNo);
    printf("Marks: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", s->marks[i]);
    }
    printf("\n");
    printf("Percentage: %f\n", s->percentage);
}

int main()
{
    struct Student s1;
    Details(&s1);
    Percentage(&s1);
    display(&s1);

    return 0;
}

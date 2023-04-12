// Program to print employee information in descending order of salary
#include <stdio.h>
#include <string.h>
struct employee {
    char name[50];
    float salary;
    int age;
};
int main() {
    struct employee emp[5];
    int i, j;
    struct employee temp;
    for(i=0; i<5; i++) {
        printf("Enter employee %d name: ", i+1);
        scanf("%s", emp[i].name);
        printf("Enter employee %d salary: ", i+1);
        scanf("%f", &emp[i].salary);
        printf("Enter employee %d age: ", i+1);
        scanf("%d", &emp[i].age);
    }
    for(i=0; i<5; i++) {
        for(j=i+1; j<5; j++) {
            if(emp[i].salary < emp[j].salary) {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
    printf("\nEmployees sorted by salary (descending order):\n");
    for(i=0; i<5; i++) {
        printf("%s, %f\n", emp[i].name, emp[i].salary);
    }
    return 0;
}

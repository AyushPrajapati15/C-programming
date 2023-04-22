// c program to print details of employee by taking input using file
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int age;
    char address[100];
};

int main() {
    FILE *fp;
    struct Employee emp;
    char filename[100];
    int n, i;

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");

    if (fp == NULL) {
        printf("File not found!\n");
        return 0;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details of employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp.name);
        printf("Age: ");
        scanf("%d", &emp.age);
        printf("Address: ");
        scanf("%s", emp.address);
        fprintf(fp, "%s %d %s\n", emp.name, emp.age, emp.address);
    }

    fclose(fp);

    fp = fopen(filename, "r");

    printf("\nEmployee details:\n");
    while (fscanf(fp, "%s %d %s\n", emp.name, &emp.age, emp.address) != EOF) {
        printf("Name: %s\n", emp.name);
        printf("Age: %d\n", emp.age);
        printf("Address: %s\n\n", emp.address);
    }

    fclose(fp);

    return 0;
}

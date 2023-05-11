// program to calculate age
#include<stdio.h>

int main() {
    int birth_month, birth_year, current_month, current_year, age_in_months, age_in_years, months_remaining;
    
    printf("Enter your birth month (1-12): ");
    scanf("%d", &birth_month);
    
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    
    printf("Enter the current month (1-12): ");
    scanf("%d", &current_month);
    
    printf("Enter the current year: ");
    scanf("%d", &current_year);
    
    age_in_months = (current_year - birth_year) * 12 + (current_month - birth_month);
    age_in_years = age_in_months / 12;
    months_remaining = age_in_months % 12;
    
    printf("Your age is: %d years and %d months\n", age_in_years, months_remaining);
    
    return 0;
}

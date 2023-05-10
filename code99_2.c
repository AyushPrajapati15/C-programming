// program to input a person's salary and calculate their income tax according to the given condition:
// For salary up to Rs. 2,50,000, the income tax is 0%
// For salary between Rs. 2,50,001 and Rs. 5,00,000, the income tax is 5%
// For salary between Rs. 5,00,001 and Rs. 10,00,000, the income tax is 20%
// For salary above Rs. 10,00,000, the income tax is 30%
// The program should output the income tax amount and the net salary (salary minus income tax).
# include <stdio.h>
int main()
{
    float sal,tax,net_Sal;
    printf("Enter your salary: ");
    scanf("%f",&sal);
    if (sal<=250000)
    {
        tax=0;
    }
    else if (sal<=500000)
    {
        tax=(sal-250000)*0.05;
    }
    else if (sal<=1000000)
    {
        tax=12500+(sal-500000)*0.20;
    }
    else
    {
        tax=112500+(sal-1000000)*0.30;
    }
    net_Sal=sal-tax;
    printf("Your income tax is %.2f and net salary after reducing tax is %.2f ",tax,net_Sal);
    
    return 0;
}
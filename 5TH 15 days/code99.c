// program to input electricity unit charges and calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill

# include <stdio.h>
int main()
{
    float unit,amount;
    printf("Enter the number of units consumed\n");
    scanf("%f",&unit);
    if (unit<=50)
    {
        amount=unit*0.50;
    }
    else if (unit<=150)
    {
        amount=50*0.50+(unit-50)*0.75;
    }
    else if (unit<=250)
    {
        amount=(50*0.50)+(100*0.75)+(unit-150)*1.20;
    }
    else
    {
        amount=(50*0.50)+(100*0.75)+(100*1.20)+((unit-250)*1.20);
    }

    amount=amount+amount*0.2;
    printf("The total amount for %.2f unit is %.2f",unit,amount);

    
    return 0;
}


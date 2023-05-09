// program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%
# include<stdio.h>
int main()
{
    int sal,hra,da,newsal=0;
    printf("Enter your salary: ");
    scanf("%d",&sal);

    if (sal<=10000)
    {
        hra=0.2*sal;
        da=0.8*sal;
    }
    else if (sal>10000 && sal<=20000)
    {
        hra=0.25*sal;
        da=0.90*sal;
    }
    else
    {
        hra=0.3*sal;
        da=0.95*sal;
    }
    newsal=sal+hra+da;
    printf("Your UPdated salary is %d ",newsal);


    return 0;
}

// stack implementation
#include <stdio.h>
#define size 100
void push(int);
void pop();
void peek();
void isempty();
void isfull();
void display();

int stack[size];
int top = -1;

void push(int num)
{
    if (top == size - 1)
    {
        printf("\nStack is full PUSH operation is not possible\n");
    }
    else
    {
        top++;
        stack[top] = num;
        printf("%d pushed successfully\n", num);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("\nStack is empty POP operation is not possible\n");
    }
    else
    {
        printf("\n%d POPPED successfully\n", stack[top]);
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf(" \nStack is empty so it doesnot contai an element to print\n");
    }
    else
    {
        printf("\nTop of the stack element is %d", stack[top]);
    }
}
void isempty()
{
    if (top == -1)
    {
        printf("\nStack is empty \n");
    }
    else
    {
        printf("\nStack is not empty \n");
    }
}
void isfull()
{
    if (top == size - 1)
    {
        printf("\nStack is full\n");
    }
    else
    {
        printf("\nStack is not full\n");
    }
}
void display()
{
    if (top == -1)
    {
        printf("\nStack does not cointain any element to display\n");
    }
    else
    {
        printf("\nThe elements of stack are\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d  ", stack[i]);
        }
    }
}

int main()
{
    isempty();
    push(45);
    push(10);
    push(55);
    push(80);
    push(65);
    push(77);
    peek();
    display();
    pop();
    display();
    peek();
    isfull();
    isempty();


    return 0;
}
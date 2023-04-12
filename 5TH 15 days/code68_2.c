// Queue imlementation
#include <stdio.h>
#define size 10
int Queue[size];
void enQueue(int);
void deQueue();
void isEmpty();
void isFull();
void display();
void peek();
int front = -1;
int rear = -1;

void enQueue(int num)
{
    if (rear == size - 1)
    {
        printf("Queue is full so insertion not possible\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        Queue[rear] = num;
        printf("%d enQueued successfully\n", num);
    }
}

void deQueue()
{
    if (front == -1)
    {
        printf("Queue is empty so deletion not possible\n");
    }
    else
    {
        printf("%d deQueued successfully\n", Queue[front]);
        front++;
        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void isEmpty()
{
    if (front == -1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is not empty\n");
    }
}

void isFull()
{
    if (rear == size - 1)
    {
        printf("Queue is full so insertion not possible\n");
    }
    else
    {
        printf("Queue is not full\n");
    }
}

void display()
{
    if (front == -1)
    {
        printf("Queue is empty so there is nothing to display\n");
    }
    else
    {
        printf("The elements of queue are  ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", Queue[i]);
        }
        printf("\n");
    }
}

void peek()
{
    if (front == -1)
    {
        printf("Queue is empty so peek operation is not possible\n");
    }
    else
    {
        printf("Peek element is %d\n", Queue[rear]);
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("Enter your choice\n");
        printf("1.enQueue\n2.deQueue\n3.isEmpty\n4.isfull\n5.display\n6.peek\n7.STOP\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            int num;
            printf("Enter the number you want to insert\n");
            scanf("%d", &num);
            enQueue(num);
        }
        else if (choice == 2)
        {
            deQueue();
        }
        else if (choice == 3)
        {
            isEmpty();
        }
        else if (choice == 4)
        {
            isFull();
        }
        else if (choice == 5)
        {
            display();
        }
        else if (choice == 6)
        {
            peek();
        }
        else
        {
            break;
        }
    }
    return 0;
}
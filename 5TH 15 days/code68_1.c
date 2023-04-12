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
    isFull();
    isEmpty();
    enQueue(10);
    enQueue(20);
    enQueue(30);
    peek();
    display();
    isEmpty();
    isFull();
    deQueue();
    peek();
    display();
}
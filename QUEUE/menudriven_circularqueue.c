// menu driven programme to implement circular queue
#include<stdio.h>
#include<stdlib.h>
#define Size 5
int front=-1;
int rear=-1;
void insert(int[],int);
int delete(int[]);
void display(int[]);
int main()
{
    int queue[Size];
    int choice,ele;
    while(1)
    {
        printf("\n1-insert\n");
        printf("2-delete\n");
        printf("3-Display\n");
        printf("4-Exit\n");
        printf("Input choice:\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter the element to be inserted:\n");
            scanf("%d",&ele);
            insert(queue,ele);
            break;
        case 2:
            ele=delete(queue);
            printf("The deleted element is %d\n",ele);
            break;
        case 3:
            display(queue);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice\n");
        }
    }
}
void insert(int queue[],int ele)
{
    if(front==(rear+1)%Size)
    {
        printf("Queue is full\n");
    }
    else
    {
        if(front==-1)
        {
            front=0;
            rear=0;
        }
        else
        rear=(rear+1)%Size;
        queue[rear]=ele;
    }
    return;
}
int delete(int queue[])
{
    int del;
    if(front==-1)
    {
        printf("Queue is EMPTY\n");
        exit(0);
    }
    del=queue[front];
    if(front==rear)
    {
        front=-1;
        rear=-1;
    }
    else
    {
        front=(front+1)%Size;
    }
    return del;
}
void display(int queue[])
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
        return;
    }
    printf("Queue is:\n");
    if(front<=rear)
    {
       for(i=front;i<=rear;i++)
         {
            printf("%d\t",queue[i]);
         }
    }
    else
    {
        for(i=front;i<Size;i++)
        {
            printf("\t%d",queue[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("\t%d",queue[i]);
        }
    }
    return;
}


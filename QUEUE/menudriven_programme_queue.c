// menu driven programme on queue
#include<stdio.h>
#include<stdlib.h>
#define size 6
int front=-1,rear=-1;
void insert(int[],int);
int delete(int[]);
void display(int[]);
int main()
{
   int queue[size],choice,ele;
   while(1)
   {
      printf("\n1-insert a value\n");
      printf("2-delete a value\n");
      printf("3-display\n");
      printf("4-exit\n");
      printf("enter your choice\n");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1: printf("enter the element to be inserted\n");
                  scanf("%d",&ele);
                  insert(queue,ele);
                  break;
          case 2: ele=delete(queue);
                  printf("the deleted element is %d",ele);
                  break;
          case 3: display(queue);
                  break;
          case 4: exit(0);

          default:printf("invalid entry\n");
      }
   }
}
void insert(int arr[],int ele)
{
    if(front==(rear+1)%size)
    {
        printf("queue is full\n");

    }
    else if(front==-1)
    {
        front=0;
        rear=0;
    }
    else
    {
        rear=(rear+1)%size;
    }
    arr[rear]=ele;
    return;
}
int delete(int arr[])
{
    int temp;
    if(front==-1)
    {
        printf("queue is empty\n");
        exit(0);
    }
    temp=arr[front];
    if(front==rear)
    {
        rear=-1;
        front=-1;

    }
    else
    {
        front=(front+1)%size;
    }
    return temp;
}
void display(int arr[])
{
    int i;
    if(front==-1)
    {
        printf("queue underflow\n");
    }
    printf("QUEUE:\n");
    if(front<rear)
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d",arr[i]);
        }
    }
    else
    {
        for(i=0;i<size;i++)
        {
            printf("\t%d",arr[i]);
        }
        for(i=0;i<=rear;i++)
        {
            printf("\t%d",arr[i]);
        }
    }
    return;
}



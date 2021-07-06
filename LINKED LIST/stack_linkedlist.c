// implementation of stack using single linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node *top=0;
void push(int);
void pop();
void display();
int main()
{
    int y,x;
    while(y!=4)
    {
        printf("\n 1-push");
        printf("\n 2-pop");
        printf("\n 3-display");
        printf("\n 4-quit");
        printf("\n enter your choice: ");
        scanf("%d",&y);
        switch(y)
        {
            case 1 : push(x);
                     break;
            case 2 : pop();
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);
        }
    }
}
void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter the element to be inserted\n");
    scanf("%d",&x);
    newnode->data=x;
    newnode->link=top;
    top=newnode;
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("stack is empty\n");
    }
    else
    {
        while(temp!=0)
        {
            printf("%d\t",temp->data);
            temp=temp->link;

        }
    }
}
void pop()
{
    struct node *temp;
    temp=top;
    if(top==0)
    {
        printf("Underflow\n");

    }
    else
    {
       printf("the poped element is %d\n",top->data);
       top=top->link;
       free(temp);

    }
}



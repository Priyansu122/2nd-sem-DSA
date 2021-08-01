
// programme to implement a menu driven programme for stack
#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(int[]);
void pop(int []);
void display(int []);
int main()
{
    int stack[10],y,ele,n,i;
    while(y!=4)
    {
        printf("\n 1-push");
        printf("\n 2-pop");
        printf("\n 3-display");
        printf("\n 4-quit");
        printf("\n enter your choice");
        scanf("%d",&y);
        switch(y)
        {
            case 1 : push(stack);
                     break;
            case 2 : pop(stack);
                     break;
            case 3 : display(stack);
                     break;
            case 4 : exit(0);
        }
    }
    push(stack);
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    top++;
    stack[top]=ele;

    pop(stack);
    n=stack[top];
    printf("\n popped element = %d",n);
    top--;

    display(stack);
    for(i=top;i>=0;i--)
    {
        printf("\n %d",stack[i]);
    }
}
void push(int stack[])
{
    int ele;
    if(top==9)
    {
        printf("\n Overflow");
        return;
    }
}

void pop(int stack[])
{
    int n;
    if(top==-1)
    {
        printf("\n Underflow");
        return;
    }
}
void display(int stack[])
{
    int i;
    if(top==-1)
    {
        printf("\n Underflow");
        return;

    }
}

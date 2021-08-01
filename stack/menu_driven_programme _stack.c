#include<stdio.h>
#include<stdlib.h>
int top=-1;
void push(int[]);
void pop(int []);
void display(int []);
int main()
{
    int stack[10],y;
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
}
void push(int stack[])
{
    int ele;
    if(top==9)
    {
        printf("\n Overflow");
        return;
    }
    printf("enter the element to be inserted\n");
    scanf("%d",&ele);
    top++;
    stack[top]=ele;

}

void pop(int stack[])
{
    int n;
    if(top==-1)
    {
        printf("\n Underflow");
        return;
    }
    n=stack[top];
    printf("\n popped element = %d",n);
    top--;
}
void display(int stack[])
{
    int i;
    if(top==-1)
    {
        printf("\n Underflow");
        return;

    }
    for(i=top;i>=0;i--)
    {
        printf("\n %d",stack[i]);
    }
}

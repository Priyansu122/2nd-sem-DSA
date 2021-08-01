//programme to check paranthesis balance
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top=-1;
char stack[100];
void pop();
void push(char);
#define N 100
int main()
{
    char a[100];
    int i;
    printf("input the expression\n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='(')
        {
            push(a[i]);
        }
        else if(a[i]==')')
        {
            pop();
        }
    }
    if(top==-1)
    {
        printf("valid");
    }
    else
    {
        printf("invalid");
    }
}
void push(char s)
{
    if(top==99)
    {
        printf("\nOVERFLOW");
        return;
    }
    top++;
    stack[top]=s;
}
void pop(void)
{
    if(top==-1)
    {
        return;
    }
    top--;

}


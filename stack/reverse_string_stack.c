//programme to reverse a string using stack
#include<stdio.h>
int top=-1;
void push(char);
char pop(void);
char stack[50];
int main()
{
    int i=0,j,l,top=-1;
    char str[50],rev[50];
    printf("enter the string\n");
    gets(str);
    l=strlen(str);
    while(str[i]!='\0')
    {
        push(str[i]);
        i++;
    }
    j=0;
    while(j<l)
    {
        rev[j]=pop();
        j++;
    }
    rev[j]='\0';
    puts(rev);
    return 0;

}
void push(char s)
{
    if(top==49)
    {
        printf("\nOVERFLOW");
        return;
    }
    top++;
    stack[top]=s;
}
char pop()
{
    char x;
    if(top==-1)
    {
        printf("\nUNDERFLOW");
        return;
    }
    x=stack[top];
    top--;
    return x;

}

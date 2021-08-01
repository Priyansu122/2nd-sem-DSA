// programme to implement postfix evaluation using stack
#include<stdio.h>
#include<string.h>
#define n 100
int top=-1;
int stack[n];
int pop(void);
void push(int);
int stype(char);
main()
{
   char postfix[n] ,ch;
   int i,v1,v2,v3,l,v;
   printf("enter postfix expression\n");
   gets(postfix);
   l=strlen(postfix);
   for(i=0;i<l;i++)
   {
       ch=postfix[i];
       switch(stype(ch))
       {
           case 0: printf("enter the value of %c\n",ch);
                   scanf("%d",&v);
                   push(v);
                   break;
           case 1:
                    switch(ch)
                    {
                        case '+': v1=pop();
                                  v2=pop();
                                  v3=v1+v2;
                                  push(v3);
                                  break;
                        case '-': v1=pop();
                                  v2=pop();
                                  v3=v2-v1;
                                  push(v3);
                                  break;
                        case '*': v1=pop();
                                  v2=pop();
                                  v3=v1*v2;
                                  push(v3);
                                  break;
                        case '/': v1=pop();
                                  v2=pop();
                                  v3=v2/v1;
                                  push(v3);
                                  break;
                    }
                    break;
       }
   }
}
void push(int s)
{

    if(top==49)
    {
        printf("\nOVERFLOW");
        return;
    }
    printf("Enter the element to insert: ");
    scanf("%d",&s);
    top++;
    stack[top]=s;
}
int pop(void)
{
    int x;
    if(top==-1)
    {
        printf("\nUNDERFLOW");
        return;
    }
    x=stack[top];
    top--;
    return x;
}


int stype(char ch)
{
    int k;
    if(isalpha(ch))
    {
        k=0;

    }
    else
    {
        k=1;

    }
    return k;
}











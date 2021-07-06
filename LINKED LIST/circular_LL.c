// programme to implement menu driven single circular queue
#include<stdio.h>
#include<stdlib.h>
struct link
{
    int info;
    struct link *next;
};
struct link *start;
void create(struct link *);
void display();
int main()
{
    struct link *node;
    int y;
    node=(struct link *)malloc(sizeof(struct link));
    if(node==NULL)
    {
        printf("memory is not available\n");
        return;

    }
    create(node);
    while(y!=6)
    {
        printf("\nyou have following options\n");
        printf("1-display\n");
        printf("2-insert at beginning\n");
        printf("3-insert at end\n");
        printf("4-delete the first\n");
        printf("5-delete the last\n");
        printf("6-exit\n");
        printf("enter your choice\n");
        scanf("%d",&y);
        switch(y)
        {
            case 1:display();
                   break;
            case 2:insertb();
                   break;
            case 3:insert_end();
                   break;
            case 4:delete_1st();
                   break;
            case 5:delete_last();
                   break;
            case 6:exit(0);
                   break;
        }
    }
}
void create(struct link *ptr)
{
    start=ptr;
    int choice=2;
    printf("enter the value to 1st node\n");
    scanf("%d",&ptr->info);
    ptr->next=start;
    printf("if you want to add more node choose 1\n");
    scanf("%d",&choice);
    while(choice==1)
    {
        ptr->next=(struct link *)malloc(sizeof(struct link));
        if(ptr->next==NULL)
        {
           printf("memory is not available\n");
           return;
        }
       ptr=ptr->next;
       printf("enter the value to next node\n");
       scanf("%d",&ptr->info);
       ptr->next=start;
       printf("if you want to add more node choose 1\n");
       scanf("%d",&choice);
    }
}
void display()
{
    struct link *temp;
    printf("LIST :\n");
    temp=start;
    do
    {
        printf("the value at node %d\n",temp->info);
        temp=temp->next;
    }while(temp!=start);
}
void insertb()
{
    struct link *temp,*temp1,*t;
    temp=t=start;
    temp1=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to the new node\n");
    scanf("%d",&temp1->info);
    while(t->next!=start)
    {
        t=t->next;
    }
    temp1->next=temp;
    start=temp1;
    t->next=start;
}
void insert_end()
{
    struct link *temp,*curr;
    temp=start;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter value to the new node\n");
    scanf("%d",&curr->info);
    while(temp->next!=start)
    {
        temp=temp->next;
    }
    temp->next=curr;
    curr->next=start;
}
void delete_1st()
{
    struct link *temp,*t;
    temp=t=start;
    while(temp->next!=start)
    {
        temp=temp->next;

    }
    start=t->next;
    temp->next=start;
    free(t);
}
void delete_last()
{
    struct link *temp,*t;
    temp=start;
    while(temp->next!=start)
    {
        t=temp;
        temp=temp->next;
    }
    t->next=start;
    free(temp);
}

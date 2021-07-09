// Menu driven doubly linked list
#include<stdio.h>
#include<stdlib.h>
struct link
{   int info;
    struct link *next;
    struct link *prev;

};
struct link *start;
void create(struct link *);
void display();
void insertb();
void insert_end();
void insert_after();
void insert_before();
void insert_at();
void deleteb();
void delete_end();
void delete_after();
void delete_at();
int main()
{
    struct link *list;
    list=(struct link *)malloc(sizeof(struct link *));
    if(list==NULL)
    {
        printf("NO MEMORY\n");
        return;
    }

    create(list);
    int y;
    while(y!=12)
    {
        printf("\n1-Display\n");
        printf("2-insert at beginning\n");
        printf("3-insert at end\n");
        printf("4-insert after\n");
        printf("5-insert before\n");
        printf("6-insert at\n");
        printf("7-delete the 1st\n");
        printf("8-delete end\n");
        printf("9-delete after\n");
        printf("10-delete at\n");
        printf("12-EXIT\n");

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
        case 4:insert_after();
               break;
        case 5:insert_before();
               break;
        case 6:insert_at();
               break;
        case 7:deleteb();
               break;
        case 8:delete_end();
               break;
        case 9:delete_after();
               break;
        case 10:delete_at();
               break;
        case 12:exit(0);
               break;
        default:printf("INVALID INPUT\n");
    }
   }

   return 0;
}
void create(struct link *ptr)
{
    start = ptr;
    struct link *curr;
    int choice =2;
    printf("enter the value of the 1st node\n");
    scanf("%d",&ptr->info);
    ptr->next=NULL;
    ptr->prev=NULL;
    printf("if you want to add more node choose 1\n");
    scanf("%d",&choice);

    while(choice==1)
    {
        curr=(struct link *)malloc(sizeof(struct link));
        if(curr==NULL)
        {
            printf("NO MEMORY\n");
            return;
        }
        ptr->next=curr;
        curr->prev=ptr;
        printf("enter the value of the next node\n");
        scanf("%d",&curr->info);
        curr->next=NULL;
        ptr=curr;
        printf("if you want to add more node choose 1\n");
        scanf("%d",&choice);
    }
}
void display()
{
    struct link *temp,*t;
    printf("the list is \n");
    temp=start;
    while(temp!=NULL)
    {
        t=temp;
        printf("the value at node = %d\n",temp->info);
        temp=temp->next;
    }
    printf("backward display\n");
    while(t!=NULL)
    {
        printf("%d\t",t->info);
        t=t->prev;
    }
}
void insertb()
{
    struct link *temp,*temp1;
    temp=start;
    temp1=(struct link *)malloc(sizeof(struct link));
    printf("enter value of new node\n");
    scanf("%d",&temp1->info);
    temp1->next=temp;
    temp->prev=temp1;
    temp1->prev=NULL;
    start=temp1;
}
void insert_end()
{
    struct link *temp,*curr;
    temp=start;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter value of new node\n");
    scanf("%d",&curr->info);
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=curr;
    curr->prev=temp;
    curr->next=NULL;
}
void insert_after()
{
    struct link *temp,*curr,*t;
    int n;
    temp=start;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to the new node\n");
    scanf("%d",&curr->info);
    printf("enter the element after which it is to be inserted\n");
    scanf("%d",&n);
    while(temp->info!=n)
    {
        temp=temp->next;
    }
    t=temp->next;
    curr->next=t;
    t->prev=curr;
    curr->prev=temp;
    temp->next=curr;
}
void insert_before()
{
    struct link *temp,*curr,*t;
    int n;
    temp=start;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to the new node\n");
    scanf("%d",&curr->info);
    printf("enter the element before which it is to be inserted\n");
    scanf("%d",&n);
    while(temp->info!=n)
    {
        temp=temp->next;
    }
    t=temp->prev;
    t->next=curr;
    curr->next=temp;
    curr->prev=t;
    temp->prev=curr;
}
void deleteb()
{
    struct link *temp;
    temp=start;
    start=temp->next;
    start->prev=NULL;
    free(temp);
}
void delete_end()
{
    struct link *temp,*t;
    temp=start;
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    t=temp->prev;

    t->next=NULL;
    free(temp);
}
delete_after()
{
    struct link *temp,*t;
    int n;
    temp=start;
    printf("enter the element after which it is to be deleted\n");
    scanf("%d",&n);
    while(temp->info!=n)
    {
        temp=temp->next;

    }
    t=temp->next;
    temp->next=t->next;
    t->next->prev=temp;
    free(t);
}
void insert_at()
{
    int pos,i=1;
    printf("enter the position\n");
    scanf("%d",&pos);
    if(pos<1)
    {
        printf("invalid position\n");
    }
    else if(pos==1)
    {
        insertb();
    }
    else
    {
        struct link *newnode,*temp;
        temp=start;
        newnode=(struct link *)malloc(sizeof(struct link));
        printf("enter the value to be nserted\n");
        scanf("%d",newnode->info);
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }

    }
}

void delete_at()
{
    int pos,i=1;
    struct link *temp;
    temp=start;
    printf("enter the position\n");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);
}

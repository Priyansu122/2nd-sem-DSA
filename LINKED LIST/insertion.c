// menu driven programme
#include<stdio.h>
#include<stdlib.h>
struct link
{
    int info;
    struct link *next;
};
struct link *start;
void create(struct link *);
void insertb();
void insert_end();
void insert_after();
void insert_before();
void insert_at();
void display();
void delete_1st();
void delete_end();
void delete_after();
void delete_at();
void count();
void search();
void sort();
int main()
{
    struct link *node;
    int choice;
    node=(struct link *)malloc(sizeof (struct link));
    if(node==NULL)
    {
        printf("memeory not available\n");
        return;
    }

    create(node);
    while(choice!=16)
    {
      printf("\nyou have following options\n");
      printf("3-insertb\n");
      printf("4-intert end\n");
      printf("5-insert after\n");
      printf("6-insert before\n");
      printf("7-insert at\n");
      printf("8-display\n");
      printf("9-delete 1st\n");
      printf("10-delete end\n");
      printf("11-delete after\n");
      printf("12-delete at\n");
      printf("13-count\n");
      printf("14-search\n");
      printf("15-sort\n");
      printf("16-exit\n");

      printf("enter your choice\n");
      scanf("%d",&choice);

      switch(choice)
      {
        case 3: insertb();
                break;
        case 4: insert_end();
                break;
        case 5: insert_after();
                break;
        case 6: insert_before();
                break;
        case 7: insert_at();
                break;
        case 8: display();
                break;
        case 9: delete_1st();
                break;
        case 10:delete_end();
                break;
        case 11:delete_after();
                break;
        case 12:delete_at();
                break;
        case 13:count();
                break;
        case 14:search();
                break;
        case 15:sort();
                break;
        case 16:exit(0);

     }
    }
    return 0;
}
void insertb()
{
    struct link *temp,*temp1;
    temp=start;
    temp1=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to the new node\n");
    scanf("%d",&temp1->info);
    temp1->next=temp;
    start=temp1;
}
void insert_end()
{
    struct link *temp,*curr;
    temp=start;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to the new node\n");
    scanf("%d",&curr->info);
    while(temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=curr;
    curr->next=NULL;
}
void insert_after()
{
    struct link *temp,*curr;
    int n;
    temp=start;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to a new node\n");
    scanf("%d",&curr->info);
    printf("input the element after which data is to be inserted\n");
    scanf("%d",&n);
    while(temp->info!=n)
    {
        temp=temp->next;

    }
    curr->next=temp->next;
    temp->next=curr;

}
void insert_before()
{
    struct link *temp,*t,*curr;
    int n;
    curr=(struct link *)malloc(sizeof(struct link));
    printf("enter the value to new node\n");
    scanf("%d",&curr->info);
    printf("input the element before whichdata to be inserted\n");
    scanf("%d",&n);
    while(temp->info!=n)
    {
        t=temp;
        temp=temp->next;

    }
    t->next=curr;
    curr->next=temp;
}
void create(struct link *ptr)
{
    start=ptr;
    int choice=2;
    printf("enter the value of the first node\n");
    scanf("%d",&ptr->info);
    ptr->next=NULL;
    printf("to add more nodes press 1\n");
    scanf("%d",&choice);
    while(choice==1)
    {
        ptr->next=(struct link *)malloc(sizeof(struct link));
        if(ptr->next==NULL)
        {
            printf("memory not available\n");
            return;
        }
        ptr=ptr->next;
        printf("enter the value of the next node\n");
        scanf("%d",&ptr->info);
        ptr->next=NULL;
        printf("if you want to add more node choose 1\n");
        scanf("%d",&choice);
    }
}

void display()
{
    struct link *temp;
    printf("the linked list is\n");
    temp=start;
    while(temp!=NULL)
    {
        printf("the value at node=%d\n",temp->info);
        temp=temp->next;
    }
}
void insert_at()
{
    struct link *temp, *newNode;
    temp = start;
    if(temp == NULL)
    {
        printf("The List is empty.\n");
        return;
    }
    newNode = (struct link *)malloc(sizeof(struct link));
    int i=0, n;
    printf("Enter the value for new node: ");
    scanf("%d", &newNode->info);
    printf("Enter the location where the element is to be inserted: ");
    scanf("%d", &n);
    while(i<n)
    {
        if(temp->next != NULL)
        {
            temp = temp->next;
        }
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void delete_1st()
{
    struct link *temp;
    temp=start;
    start=temp->next;
    free(temp);
}
void delete_end()
{
    struct link *temp,*t;
    temp=start;
    while(temp->next!=NULL)
    {
        t=temp;
        temp=temp->next;
    }
    t->next=NULL;
    free(temp);
}
void delete_after()
{
    struct link *temp,*t;
    int n;
    temp=start;
    printf("input the element after data is to be inserted\n");
    scanf("%d",&n);
    while(temp->info!=n)
    {
        temp=temp->next;

    }
    t=temp->next;
    temp->next=t->next;
    free(t);
}
void delete_at()
{
    struct link *t,*temp;
    int n,i=1;
    temp=start;
    printf("enter the location at which element is to be deleted\n");
    scanf("%d",&n);
    while(i<n)
    {
        t=temp;
        temp=temp->next;
        i++;

    }
    t->next=temp->next;
    free(temp);
}
void count()
{
    int i=0;
    struct link *temp;
    temp=start;
    if(temp==NULL)
    {
        printf("List is empty\n");
        return;
    }
    while(temp!=NULL)
    {
        i++;
        temp=temp->next;
    }
    printf("no of nodes is %d",i);
}
void search()
{
    struct link *temp;
    temp=start;
    int x,i=1;
    printf("enter the element to be searched\n");
    scanf("%d",&x);
    while(temp->info!=x)
    {
        temp=temp->next;
        i++;
    }
    printf("the location of element is %d",i);
}
void sort()
{
    struct link *curr;
    struct link *flag;
    curr=start;
    int temp;
    if(curr==NULL)
    {
        printf("the list is empty\n");
        return;
    }
      while(curr->next!=NULL)
      {
         flag=curr->next;
         while(flag->next!=NULL)
         {
            if((curr->info)>=(flag->info))
            {
                temp=curr->info;
                curr->info=flag->info;
                flag->info=temp;
            }
            flag=flag->next;
         }
         curr=curr->next;
      }
    printf("after sorting\n");
    display();
}



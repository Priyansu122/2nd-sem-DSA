// implementation of menudriven binary search tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int info;
    struct node *left;
    struct node *right;
};
struct node * insert(struct node * ,int);
void inorder(struct node *);
void preorder(struct node *);
void postorder(struct node *);
struct node * find(struct node *,int);
struct node * del(struct node *,int);
struct node * find_min(struct node *);

int main()
{
    int ch = 1;
    int x;
    struct node *root = NULL,*t;
    while(1)
    {
        printf("\n 1-insert\n");
        printf("2-search\n");
        printf("3-inorder\n");
        printf("4-postorder\n");
        printf("5-preorder\n");
        printf("6-min\n");
        printf("7-deletion\n");
        printf("8-exit\n");

        printf("enter your choice\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("enter data to insert the bstree\n");
                    scanf("%d",&x);
                    root=insert(root,x);
                    break;
            case 2: printf("enter the data t0 search the Bst search\n");
                    scanf("%d",&x);
                    t=find(root,x);
                    if(t==NULL)
                    {
                        printf("not present\n");
                    }
                    else
                    {
                        printf("present\n");
                    }
            case 3: inorder(root);
                    break;
            case 4: postorder(root);
                    break;
            case 5: preorder(root);
                    break;
            case 6: t=find_min(root);
                    printf("the minimum %d\n",t->info);
                    break;
            case 7: printf("enter an element to delete from tree\n");
                    scanf("%d",&x);
                    del(root,x);
                    break;
            case 8: exit(0);
                    break;
            default: printf("INVALID INPUT\n");
        }
    }
}
void inorder(struct node * root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d\t",root->info);
        inorder(root->right);
    }
}
struct node * insert(struct node * t,int y)
{
    if(t==NULL)
    {
        t=(struct node *)malloc(sizeof(struct node));
        t->info=y;
        t->left=NULL;
        t->right=NULL;
    }
    else if(y < t->info)
    {
        t->left=insert(t->left,y);
    }
    else if(y > t->info)
    {
        t->right=insert(t->right,y);
    }
    return t;
}
void postorder(struct node * root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t",root->info);
    }
}
void preorder(struct node * root)
{
    if(root!=NULL)
    {
        printf("%d\t",root->info);
        preorder(root->left);
        preorder(root->right);
    }
}
struct node * find(struct node * root,int x)
{
    struct node * ptr;
    if(root==NULL)
    {
        printf("the tree is empty\n");
        return root;
    }
    ptr=root;
    while(ptr!=NULL)
    {
        if(x==ptr->info)
        {
            return ptr;
        }
        else if(x<ptr->info)
        {
            ptr=ptr->left;
        }
        else if(x>ptr->info)
        {
            ptr=ptr->right;
        }
    }
    return ptr;
}
struct node *find_min(struct node * root)
{
    if(root==NULL || root->left==NULL)
        return root;
        while(root->left!=NULL)
        {
          root=root->left;
        }
        return root;
}
struct node * del(struct node * t,int y)
{
    struct node * temp;
    if(t==NULL)
    {
        printf("element not found\n");
    }
    else if(y < t->info)
    {
        t->left=del(t->left,y);
    }
    else if(y > t->info)
    {
        t->right = del(t->right,y);
    }
    else if((t->left) && (t->right))
    {
        temp = find_min(t->right);
        t->info=temp->info;
        t->right=del(t->right,t->info);
    }
    else
    {
        temp=t;
        if(t->left == NULL)
        {
            t=t->right;
        }
        else if(t->right == NULL)
        {
            t=t->left;
        }
        free(temp);
    }
    return t;
}


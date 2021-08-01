#include<stdio.h>
void insert(int[],int,int,int);
int main()
{
    int arr[20],i,ele,pos;
    printf("enter the elements of the array\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter element\n");
    scanf("%d",&ele);
    printf("enter the pos\n");
    scanf("%d",&pos);
    insert(arr,10,ele,pos);
    return 0;
}
void insert(int arr[],int n,int ele,int pos)
{
    int i;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",arr[i]);
    }
}

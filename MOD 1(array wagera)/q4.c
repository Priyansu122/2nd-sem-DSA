#include<stdio.h>
#define size 5
int search(int[],int);
int main()
{
    int arr[size],pos=-1,x,res,i;
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to be searched\n");
    scanf("%d",&x);
    res=search(arr,x);
    if(res==1)
    {
        printf("element is not present");

    }
    else
    {
        printf("element is present at %d",res);
    }
}
int search(int arr[],int x)
{
    int i,pos=-1;
    for(i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            pos=i;
            break;
        }
    }
    return pos;
}

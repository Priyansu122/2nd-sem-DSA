#include<stdio.h>
void delete(int[],int,int);
int main()
{
   int arr[10],i,pos;
   printf("enter the elements of the array\n");
   for(i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("enter the pos\n");
    scanf("%d",&pos);
    delete(arr,10,pos);
    return 0;
}
void delete(int arr[],int n,int pos)
{
    int i;
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",arr[i]);
    }
}
































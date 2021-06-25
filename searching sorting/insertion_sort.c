// programme to implement insertion sort
#include<stdio.h>
#define size 50
void insertion(int[],int);
int main()
{
    int arr[size],n,i;
    printf("enter no of elements\n");
    scanf("%d",&n);
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion(arr,n);
    printf("shorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void insertion(int arr[],int n)
{
    int i,j,flag;
    for(j=1;j<n;j++)
    {
        flag=arr[j];
        i=j-1;
        while((i>-1)&&(arr[i]>flag))
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=flag;
    }
}

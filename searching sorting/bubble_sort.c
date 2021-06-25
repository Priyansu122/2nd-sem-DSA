// programme to implement insertion sort
#include<stdio.h>
#define size 50
void bubble(int[],int);
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
    bubble(arr,n);
    printf("shorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }
}
void bubble(int arr[],int n)
{
    int temp,flag,i;
    for(flag=1;flag<=n;flag++)
    {
        for(i=0;i<n-flag;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }
}

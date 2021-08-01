#include<stdio.h>
#define size 5
void largest(int[]);
int smallest(int[]);
int main()
{
    int i,res,arr[size];
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    largest(arr);
    res=smallest(arr);
    printf("smallest element =%d",res);
    return 0;

}
void largest(int arr[size])
{
    int max,i;
    max=arr[0];
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("largest element=%d",max);
}
int smallest(int arr[size])
{
    int min,i;
    min=arr[0];
    for(i=0;i<size;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    return min;
}


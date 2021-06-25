// programme to implement binary search
#include<stdio.h>
#define size 10
int main()
{
    int i,arr[size],num,res;
    printf("enter the elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element to be searched\n");
    scanf("%d",&num);
    res=binary_search(arr,0,size-1,num);
    if(res==-1)
    {
        printf("the element is not present in the array\n");
    }
    else
    {
        printf("the element is present at %d",res);
    }
    return 0;

}
int binary_search(int arr[],int l,int r,int num) // l=lower limit , r=upper limit
{   int mid;
    if(r>=l)
    {
       mid=(l+r)/2;

       if(arr[mid]==num)
       {
           return mid;
       }
       if(arr[mid]>num)
       {
           return binary_search(arr,l,mid-1,num);
       }
       return binary_search(arr,mid+1,r,num);
    }
    return -1;
}


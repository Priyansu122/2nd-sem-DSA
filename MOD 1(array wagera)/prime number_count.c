// programme to count prime numbers
#include<stdio.h>
#define size 5
int prime(int[]);
int main()
{
    int arr[size],i,res;
    printf("enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    res=prime(arr);
    printf("the no of prime no is %d",res);
}
int prime(int arr[])
{
   int k,i,flag,count=0;
   for(i=0;i<5;i++)
   {
       k=1;
       flag=0;
       while(k<=arr[i])
       {
           if(arr[i]%k==0)
           {
               flag++;
           }
           k++;
       }

      if(flag==2)
      {
         count++;
      }
   }
   return count;
}

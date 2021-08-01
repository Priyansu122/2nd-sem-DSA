
#include<stdio.h>
#define size 5
typedef struct strudent
{
    char name[size];
    char branch[size];
    int roll;
    float cgpa;
} stud;
int main()
{
    stud arr[size];
    int i;

    for(i=0;i<size;i++)
    {
        printf("input name\n");
        scanf("%s",arr[i].name);
        printf("input branch\n");
        scanf("%s",arr[i].branch);
        printf("input roll\n");
        scanf("%d",&(arr[i].roll));
        printf("input CGPA\n");
        scanf("%f",&(arr[i].cgpa));
    }
    printf("the elements of the structure array\n");
    for(i=0;i<size;i++)
    {
        printf("name=%s\t",arr[i].name);
        printf("name=%s\t",arr[i].branch);
        printf("name=%d\t",arr[i].roll);
        printf("name=%f\t",arr[i].cgpa);
        printf("\n");

    }
    return 0;
}

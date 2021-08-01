#include<stdio.h>
void display(char[],int,int);
struct employee
{
    char name[20];
    int empid;
    int salary;
};
int main()
{
    struct employee e;
    printf("enter employee details that is name,empid,salary respectively\n");
    gets(e.name);
    scanf("%d%d",&(e.empid),&(e.salary));
    display(e.name,e.empid,e.salary);

}
void display(char name[20],int empid,int salary)
{
    printf("name,empid,salary\n");
    puts(name);
    printf("%d\t%d\t",empid,salary);
}

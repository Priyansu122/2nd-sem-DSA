//Program to display the members of structure 'Employee' using function 'Display' using individual member variables.
#include <stdio.h>

struct Employee
{
  char Name[50];
  int EmpID;
  float salary;
};

void Display(struct Employee *);

int main()
{
  struct Employee E;
  printf("Enter the Name, EmpID, and Salary of the employee:\n");
  scanf(" %[^\n]", &E.Name);
  scanf("%d %f", &E.EmpID, &E.salary);
  Display(&E);
  return 0;
}

void Display(struct Employee *p)
{
  printf("\nThe Name of the employee is ");
  puts(p->Name);
  printf("The Employee ID and Salary of the employee are %d and %f.", p->EmpID, p->salary);
}

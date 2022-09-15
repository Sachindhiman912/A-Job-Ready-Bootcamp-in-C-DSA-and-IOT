#include<stdio.h>
struct Employee input();
struct Employee
{
    int id;
    char name[10];
    float salary;
};
int main()
{
    input();
}
struct Employee input()
{
    struct Employee emp;
    printf("Enter employee ID ");
    scanf("%d",&emp.id);
    fflush(stdin);
    printf("enter employee name ");
    fgets(emp.name,10,stdin);
    printf("enter employee salary ");
    scanf("%f",&emp.salary);
}
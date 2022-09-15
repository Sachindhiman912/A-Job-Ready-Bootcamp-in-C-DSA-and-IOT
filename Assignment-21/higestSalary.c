#include<stdio.h>
#include<string.h>
struct Employee input();
void display();
struct Employee
{
    int id;
    char name[10];
    float salary;
};
int main()
{
    struct Employee e1[5];
    int i;
    for(i=0;i<5;i++)
    {
        e1[i]=input();
        printf("\n");
    }
    for(i=0;i<5;i++)
    {
        display(e1[i]);
        printf("\n");
    }
    return 0;
}
struct Employee input()
{
    struct Employee emp;
        printf("Enter employee ID :");
        scanf("%d",&emp.id);
        fflush(stdin);
        printf("Enter employee name :");
        fgets(emp.name,10,stdin);
        emp.name[strlen(emp.name)-1]='\0';
        printf("Enter employee salary :");
        scanf("%f",&emp.salary);
    
    return emp;
}
void display(struct Employee e)
{
    printf("%d %s %f",e.id,e.name,e.salary);
}
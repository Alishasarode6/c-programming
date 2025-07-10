#include<stdio.h>
struct employe
{
    int ID;
    char name[100];
    float salary;

};

int main()
{
    struct employe s;

    printf("enter employe details :");
    printf("\nID : ");
    scanf("%d",&s.ID);
    printf("name : ");
    scanf("%s", &s.name);
    printf("salary : ");
    scanf("%f", &s.salary);

    printf("\nGiven data is : \n");
    printf("\nID     :%d",s.ID);
    printf("\nname   :%s",s.name);
    printf("\nsalary :%.2f",s.salary);

    return 0;
}
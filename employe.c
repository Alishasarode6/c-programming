#include<stdio.h>
struct employe
{
    int ID;
    char name[100];
    float salary;

};

int main()
{
    struct employe e;

    printf("enter employe details :");
    printf("\nID : ");
    scanf("%d",&e.ID);
    printf("name : ");
    scanf("%s", &e.name);
    printf("salary : ");
    scanf("%f", &e.salary);

    printf("\nGiven data is : \n");
    printf("\nID     :%d",e.ID);
    printf("\nname   :%s",e.name);
    printf("\nsalary :%.2f",e.salary);

    return 0;
}
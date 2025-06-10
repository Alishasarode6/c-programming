#include<stdio.h>
int main()
{
    int eid;
    char name[20];
    float bs,da,hra,tax,totalsalary;

    printf("enter employe details");
    printf("enter employe id");
    scanf("%d",&eid);
    printf("enter employe name\n"); 
    scanf("%s",&name);
    printf("enter basic salary\n");
    scanf("%f",&bs);
    printf("enter DA(%%)\n");
    scanf("%f",&da);
    printf("enter HRA(%%)\n");
    scanf("%f",&hra);
    printf("enter tax(%%)\n");
    scanf("%f",&tax);
    totalsalary=bs+((bs*(da+hra-tax))/100);
    printf("Total salary:%2f",totalsalary);
    return 0;
}
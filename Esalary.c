#include<stdio.h>
int main()
{
    int Eid;
    char name[20];
    float bs,da,hra,tax,totalsalary;

    printf("enter employee details");
    scanf("%d", &Eid);
    printf("enter employee name");
    scanf("%s", &name);
    printf("enter basic salary");
    scanf("%f", &bs);
   if("invalid salary");
 
 
    printf("enter DA(%%)\n");
    scanf("%f", &da);
    printf("enter HRA(%%)\n");
    scanf("%f", &hra);
   
    printf("enter total salary");
    scanf("%f", &totalsalary); 

    if(bs>=45000)
    tax=15;
else if(bs>=40000)
     tax=10;
else if(bs>=30000)
     tax=5;
    else 
      tax=0;
    
    totalsalary = bs+((bs*(da+hra-tax))/100);
    printf("totalsalary is: %2f", totalsalary);
    return 0;
    

}
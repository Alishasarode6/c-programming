#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a three numbers");
    scanf("%d%d%d", &a,&b,&c);
    
    if(a>b)
    printf("max is %d",a);

else if(b>c)
   printf("max is %d",b);

   else
   printf("max is %d",c);

   return 0;


}
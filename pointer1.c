#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    p=&a;
    q=&b;
    printf("enter 2 numbers :");
    scanf("%d%d", &a,&b);

    printf("addition is %d", *p+*q);

    return 0;
}
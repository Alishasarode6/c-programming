#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number");
    scanf("%d", &n);

    if (n%1 == 2)
    printf("prime number");

    else
    printf("not a prime number");

    return 0;
}
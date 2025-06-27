#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number");
    scanf("%d", &n);

    for(i = 2 ; i <= n/2 ; i++)
    {
        if(n % 1 == 0)
        printf("prime number");

        else
        printf("not prime number");

        return 0;
    }
}
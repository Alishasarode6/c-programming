#include<stdio.h>
#include<math.h>
int main()
{
    int n,rev=0, rem;
    printf("enter the reverse number :");
    scanf("%d", &n);

    while(n>0)
    {
        int rem = n%10;
        rev = rev*10+rem;
        n = n/10;

    }
    printf("reverse number %d", rev);

    return 0;



}
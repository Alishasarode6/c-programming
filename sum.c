#include<stdio.h>
int main()
{
    int a[100],sum=0,i,n;
    printf("enter the sum of digits");
    scanf("%d",&n);
    printf("enter array element");
    for(i=0; i<=n; i++)
    scanf("%d",&a[i]);
    for(i=0; i<=n; i++)
    sum +=a[i];

    printf("sum is : %d",sum);

    return 0;
}
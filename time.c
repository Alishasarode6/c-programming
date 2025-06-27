#include<stdio.h>
int main()
{
    int h,m,s;
    printf("enter the time in hours,minutes,seconds\n");
    scanf("%d%d%d", h,m,s);

    if(h==24,m==60,s==60)
    printf(" time is valid %d%d%d",h,m,s);

    else
    printf("time is invalid");

return 0;
}
#include<stdio.h>
int main()
{
    int a[100],n,i,key,flag;
    printf("enter element for search");
    scanf("%d",&key);
    flag=0;

    for(i=0;i<=n;i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }

      if(flag==1)
           printf("found");
        
        else
            printf("not found");
        
        return 0;
    
}
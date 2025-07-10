#include<stdio.h>
#include "check.h"

int main()
{
    int n,y,ch;
    
    while(1)
    {
        printf("\n\n1.factorial \n2.armstrong \n3.perfect \n4.prime \n5.reverce \n6.filonacci series \n7.palindrome \n8.neon \n9.count digit \n10.power \n11.enter a choice");
        scanf("%d", &ch);

        if (ch == 11)
        return 0;

        printf("enter a number :");
        scanf("%d", &n);

        switch(ch)
        
         case 1:
     
         printf(" factorial %d =%n\n",fact,n);
         break;



    }
}
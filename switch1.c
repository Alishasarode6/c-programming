#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("Enter a two numbers");
    scanf("%d%d",&ch);

    printf("\n addition");
    printf("\nsubstraction");
    printf("\n multiplication");
    printf("\n division");
    printf("enter a choice");

    switch(ch)
    {
        case 1: printf("addition %d",(a+b));
        break;
        case 2: printf("substraction %d",(a-b));
        break;
        case 3: printf("multiplication %d",(a*b));
        break;
        case 4: printf("division %d",(a/b));
        break;
        default :printf("invalid choice");
        
        
    }
    return 0;


}
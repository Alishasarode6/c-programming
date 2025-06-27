#include<stdio.h>
int main()
{
    char ch;
    printf("Enter anything:");
    scanf("%c",&ch);

    if((ch>=65 && ch<=90)||(ch<=97 && ch<=122))
    if((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'))
      printf("alphabet");

    else if(ch>='0' && ch<='9')
      printf("Digit");

    else
     printf("Special symbol");
    return 0;
       
       
}
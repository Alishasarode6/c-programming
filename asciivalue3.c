#include<stdio.h>
int main()
{
    char ch;
    printf("Enter Anything");
    scanf("%c",&ch);

    if(isalphabet(ch))
    printf("Alphbet");
else if(isdigit(ch))
      printf("Digit");
else 
     printf("Special symbol");
    return 0;
+

}
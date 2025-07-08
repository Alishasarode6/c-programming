#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=*a;
   *a=*b;
    *b=temp;

}
int main()
{
    int x,y;
    printf("enter 2 numbers :");
    scanf("%d%d",&x,&y);
    swap(&x,&y);
    printf("after swapping \nx=%d\ny=%d",x,y);

    return 0;
}
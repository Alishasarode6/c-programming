#include<stdio.h>
int main()
{
    int id=1,pid1,pid2,pid3;
    char pname1[100],pname2[100],pname3[100],cname[100],cmob[100];
    float pprice1,pprice2,pprice3;
    int pqty1,pqty2,pqty3;

    printf("Entre Product 3 Details : ");
    pid3 = id++;
    printf("customer name:");
    printf("%d : cid");
    printf("%d :cqty");
    printf("%d : cmob");



    printf("Entre product 1 Details:");
    pid1 = id++;
    printf("\nName :");
    scanf("%s", &pname1);
    printf("Price: ");
    scanf("%f", &pprice1);
    printf("Qty :");
    scanf("%d",&pqty1);

    
    printf("Entre product 2 Details:");
    pid2 = id++;
    printf("\nName :");
    scanf("%s", &pname2);
    printf("Price: ");
    scanf("%f", &pprice2);
    printf("Qty :");
    scanf("%d",&pqty2);

    
    printf("Entre product 3 Details:");
    pid3 = id++;
    printf("\nName :");
    scanf("%s", &pname3);
    printf("Price: ");
    scanf("%f", &pprice3);
    printf("Qty :");
    scanf("%d",&pqty3);

    total = (pprice1* pqty1) + (pprice2 * pqty2) + (pprice3 * pqty3);

    if(total > 10000)
    discount = 10;
else if (total > 8000)
    discount = 7;
else if (total > 5000)
    discount = 3;
else 
    discount = 0;

    disAmount =(total * discount)/100;
    payAmt= total-disAmount;

    printf("\nCustomer Name: %s",cname);
    printf("\nMobile Number: %s",cmob);
    printf("\n--------------------------------------------------------------------------------------------");
    printf("\n|    ID   |       NAME              |      PRICE          |     QTY     |      total       |");
    printf("\n--------------------------------------------------------------------------------------------");
    printf("\n|%9d|%22s|%21d|%12d|%18f|", pid1,pname1, pqty1, (pprice1 * pqty));
    printf("\n--------------------------------------------------------------------------------------------");
    printf("\n|%9d|%22s|%21d|%12d|%18f|", pid2,pname2, pqty2, (pprice2 * pqty));
    printf("\n--------------------------------------------------------------------------------------------");
    printf("\n|%9d|%22s|%21d|%12d|%18f|", pid3,pname3, pqty3, (pprice3 * pqty));
    printf("\n--------------------------------------------------------------------------------------------");
    printf("\n\t\t\t\t\tTotal           : %.2f",total);
    printf("\n\t\t\t\t\tDiscount (%%)   :  %f",discount);
    printf("\n\t\t\t\t\tDiscount Amount : %.2f",disAmount);
    printf("\n\t\t\t\t\tPay Amount      : %.2f", payAmt);

    return 0;

}
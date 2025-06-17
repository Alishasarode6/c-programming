
#include <stdio.h>
int main()
{
    float amt = 0;
    int unit;

    printf("Enter Units  :");
    scanf("%d", &unit);

    if (unit >= 100)
    {
        amt = 100 * 8;
        unit = unit - 100;

        if (unit >= 100)
        {
            amt = amt + (100 * 10);
            unit = unit - 100;

            if (unit >= 100)
            {
                amt = amt + (100 * 12);
                unit = unit - 100;

                if (unit >= 100)
                {
                    amt = amt + (100 * 15);
                    unit = unit - 100;
                    if (unit > 0)
                    {
                        amt = amt + (100 * 17);
                    }
                }
                else
                    amt = amt + (unit* 15);
            }
            else
                amt = amt + (unit * 12);
        }
        else
            amt = amt + (unit* 10);
    }
    else
        amt = amt + (unit* 8);

    printf("%f", amt);

    
   return 0;
}
#include<stdio.h>
int main()
{
    float fahrenheit , celsius, kelvin;
    printf("enter the temperature in fehrenheit: ");
    scanf("%f", &fahrenheit);
    celsius=(fahrenheit - 32)*5/9.0;
    kelvin=celsius+273.15;
    printf("%2f F is equal to %2f c and %.2fk\n",fahrenheit,celsius,kelvin);

    return 0;
}
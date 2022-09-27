#include <stdio.h>
#include <stdlib.h>

int main()
{
    float t;
    printf("Enter the value of temperature in Celsius: ");
    scanf("%f",&t);
    printf("Equivalent temperature of %.2f C is %.2f Kelvin", t,(t+273));
    return 0;
}

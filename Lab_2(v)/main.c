//C program that calculates the equivalent resistance of the circuit. Where R1=5 ohm, R2=3 ohm and R3=9 ohm connected in series.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,r2,r3;
    printf("Enter the value of resistor 1: ");
    scanf("%d",&r1);
    printf("Enter the value of resistor 2: ");
    scanf("%d",&r2);
    printf("Enter the value of resistor 3: ");
    scanf("%d",&r3);

    printf("The Equivalent Resistance of %d, %d, %d is: %d ohms\n",r1,r2,r3,r1+r2+r3);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

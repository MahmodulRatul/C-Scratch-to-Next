// A C program to find equivalent resistance of a circuit.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1,r2,r3,r4,equivalent;
    printf("Value of r1: ");
    scanf("%f",&r1);
    printf("Value of r2: ");
    scanf("%f",&r2);
    printf("Value of r3: ");
    scanf("%f",&r3);
    printf("Value of r4: ");
    scanf("%f",&r4);
    equivalent=(1/((1/r1)+(1/r2)+(1/r3)+(1/r4)));
    printf("Equivalent resistance of the above resistors is : %.2f",equivalent);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL - AIUB (19-1).

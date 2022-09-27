//A C program to find equivalent circuit of 3 register (1 in series with 2 in parallel).
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1, r2, r3, Equivalent;
    printf("Enter R1 :");
    scanf("%f",&r1);
    printf("Enter R2 :");
    scanf("%f",&r2);
    printf("Enter R3 :");
    scanf("%f",&r3);
    Equivalent=r1+(1/((1/r2)+(1/r3)));
    printf("Equivalent resistance of the above resistors is : %.2f",Equivalent);
    return 0;
}
//Program contributed by MOHAMMAD MAHMODUL KABIR RATUL - (AIUB,19-1)

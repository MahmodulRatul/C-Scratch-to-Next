//C program to find factorial of a number.
#include <stdio.h>
#include <stdlib.h>

int main()
{int Number;
long long Factorial;
    printf("Enter the Number : ");
    scanf("%d",&Number);
    Factorial = 1 ;
    while(Number>0)
    {
        Factorial = Factorial*Number;
        --Number;
    }
    printf("The Factorial of %d Is = %lld",Number,Factorial);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

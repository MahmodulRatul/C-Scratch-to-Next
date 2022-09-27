//A C program to find multiplication table for a number.
#include <stdio.h>
#include <stdlib.h>

int main()
{   int i,a=0,n;
    printf("Enter n : ");
    scanf("\n%d",&n);
    for(i=1;i<=10;i++)
    {
       printf("%d * %d   = %d\n",n,i,a=n*i);
    }
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

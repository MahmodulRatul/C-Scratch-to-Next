// A C Program to implement nested for loop.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,i,j;
    for (i=1;i<=3;i++)
    {
        for (j =1;j<=2;j++)
        {
            sum = i+j;
            printf("i=%d, j=%d, sum = %d\n",i,j,sum);
        }
    }
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

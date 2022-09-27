//A C Program to build a pyramid with star
#include <stdio.h>
#include <stdlib.h>
int main()
{
    {
          int n,i,j;
          n=20;

          for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
            printf("\n");
          }
    }
       {
           int i,j;
            for(i=19;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                {
                    printf("*");
                }
            printf("\n");
            }
       }
}
//Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL

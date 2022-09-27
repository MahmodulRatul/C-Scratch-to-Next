// A C program to find the sum of numbers divisible by 3 and 5.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,sum=0,count=0;

    printf("Enter initial boundary: ");
    scanf("%d",&n1);
    printf("Enter final boundary: ");
    scanf("%d",&n2);
    for(int i=n1;i<=n2;i++)
    {
        if(i%3==0 && i%5==0)
            {
                count++;
                sum = sum+i;
                printf("%d number: %d\n",count,i);
            }
    }
    printf("Sum of all numbers divisible by 3 and 5 : %d",sum);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

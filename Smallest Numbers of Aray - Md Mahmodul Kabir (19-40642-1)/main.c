//A C program to find smallest number in an array
#include <stdio.h>
int main()
{
    int a[50], min;
    int i,n,sum=1;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter %d elements in the array:", n);
    for(i=0;i<n;i++)
        scanf("%d\n",&a[i]);
    min= a[0];
    for(i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
                sum=i+1;
            }
        }
                printf("minimum element is present at %d and it's value is %d.\n", sum,min);
    return 0;
}
//Program Contributed by MOHAMMAD MDMAHMODUL KABIR RATUL.

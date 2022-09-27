//C program that shows odd numbers of the elements of an array
#include <stdio.h>
void main()
{
    int a[100],i,num;
    printf("enter the size of an array : \n");
    scanf("%d",&num);
    printf("enter the elements of the array: \n",num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("odd elements in the array:\n");
    for(i=0;i<num;i++)
    {
        if (a[i]%2!=0)
        {
            printf("%d\n",a[i]);
        }
    }
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

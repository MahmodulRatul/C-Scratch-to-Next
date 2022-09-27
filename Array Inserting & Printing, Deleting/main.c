#include <stdio.h>
#include <stdlib.h>

int main()
{ int size;
printf("Enter Size :");
scanf("%d",&size);
float Marks[size];
int i;
for(i=0;i<size;i++)
{
 printf("%d Enter a Mark : ",i);
 scanf("%f",&Marks[i]);
}

printf("Lets Print All  The Marks : \n\n");
int j;
for(j=0;j<size;j++)
{
    printf("[%d] %.1f\n",j, Marks[j]);
}
printf("Lets Delete element from index 4:\n");
int index ;
for(index=4;index<size-1;index++)
{
    Marks[index]=Marks[index+1];
}
printf("Array After Deleting :\n");
for(i=0;i<size-1;i++)
{
    printf("[%d]   %.1f  \t",i,Marks[i]);
}
    return 0;
}

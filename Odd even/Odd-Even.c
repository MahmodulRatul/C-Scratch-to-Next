// C program that finds odd and even number
#include <stdio.h>
#include <conio.h>
void main()
{char con;
printf(" Odd/Even number detector \n");
do{
int num;
printf("Enter the Number you want to check : \n");
scanf("%d",&num);
if(num%2!=0)
    {
        printf("Given number %d is an odd number. \n",num);
    }
else
        printf("Given number %d is an Even number. \n",num);

printf("\nPress Y to continue or Press any Key To Exit");
scanf(" %c",&con);
}
while(con == 'y' || con == 'Y');
getch();
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

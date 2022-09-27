// Detect whether the given mathematical expression is properly parenthesized or not
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
int i,j,l,t=0,f;
char input[20];
printf("Enter the input : ");
scanf("%s",&input);
l=strlen(input);
for(i=0;i<l;i++)
{
    if(input[i]=='(')
    {t++;f++;}
    else if(input[i]==')')
    {t--;f++;}
    else if(input[i]=='?'||input[i]=='@'||input[i]=='$'||input[i]=='&'||input[i]=='^'||input[i]=='#')
        break;
    else if(input[i]=='*'||input[i]=='/'||input[i]=='+'||input[i]=='-')
    {
      if((0<=input[i]<=9&&0<=input[i+1]<=9)||(input[i-1]>96 && input[i-1]<123 && input[i+1]>96 && input[i+1]<123))
        {
          continue;
        }
       else
           break;
    }
}

if(i==l && t==0)
   printf("The given expression is Legal \n");
else
   printf("The given expression is not Legal \n");

((t==0)&&(f%2==0))? printf("The given expression is parenthesized ! \n"):printf("The given expression is not parenthesized ! \n");
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.

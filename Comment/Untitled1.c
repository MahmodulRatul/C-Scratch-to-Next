#include<stdio.h>
void main()
{
char arr[30];
printf("Enter the text: ");
gets(arr);
if(arr[0] == '/')
{
if(arr[1] == '/') { printf("It's a comment"); }
else if(arr[1] == '*')
{
int f=0;
for(int i=2; i<30; i++)
{
if(arr[i] == '*')
{
if(arr[i+1] == '/')
{
printf("It's a comment");
f=1;
break;
}
}
}

 if(f==0) printf("It's not a comment");

 }
else
{
printf("It's not a comment");
}
}
else
{
printf("It's not a comment");
}
}

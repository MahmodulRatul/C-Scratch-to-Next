//A C program to check input is number or not
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool checkDigit(char str[])
{
    int flag=0;
    for (int i=0;i<strlen(str); i++)
    {
        if (str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9'||str[i]=='.')
        flag ++;
    }
    if(flag==strlen(str))
    return (true);
    return (false);
}

int main()
{
    char x[100];
    printf("Enter input : ");
    scanf ("%s", &x);
    checkDigit(&x) ? printf("\n%s is a number\n",x) : printf("\n%s is not a number\n",x);
    return 0;
}
//Program contributed by MOHAMMAD MAHMODUL KABIR RATUL - (AIUB,19-1)

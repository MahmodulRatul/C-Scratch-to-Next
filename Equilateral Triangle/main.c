#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float s;
    float Area;
    printf("Enter the length of any side: ");
    scanf("%f",&s);
    Area = ((pow(3,0.5))*(pow(s,2)))/4;
    printf("Area of the Equilateral Triangle is %.2f",Area);
    return 0;
}

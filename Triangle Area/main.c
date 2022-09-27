#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l, b;
    printf("Enter the value of Length: ");
    scanf("%f",&l);
    printf("Enter the value of Breadth: ");
    scanf("%f",&b);
    printf("Area of the triangle is: %.2f",(l*b)/2);
    return 0;
}

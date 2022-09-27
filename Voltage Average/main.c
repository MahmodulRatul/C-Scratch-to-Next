#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1, v2;
    printf("Enter the value of voltage 1: ");
    scanf("%f",&v1);
    printf("Enter the value of voltage 2: ");
    scanf("%f",&v2);
    printf("Average Voltage of the two source is: %.2f",(v1+v2)/2);
    return 0;
}

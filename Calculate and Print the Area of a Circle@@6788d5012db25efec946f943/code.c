#include <stdio.h>
int main()
{
    float r,a;
    const float pi=3.14;
    scanf("%f",&r);
    a=pi * r * r;
    printf("Area: %.2f\n",a);
    return 0;
}
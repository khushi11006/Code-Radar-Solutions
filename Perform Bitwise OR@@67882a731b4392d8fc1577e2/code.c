#include <stdio.h>
int main()
{
    int a,b,result;
    scanf("%d",&a);
    scanf("%d",&b);
    result=a || b;
    printf("%d | %d: %d\n",a,b,result);

}
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int lsb = a & 1;
    if (a&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
}
#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>0)
    {
        printf("Positive");
    }
    else if(a==0){
        printf("Zero");
    }
    else{
        printf("Negative");
    }
    return 0;
}
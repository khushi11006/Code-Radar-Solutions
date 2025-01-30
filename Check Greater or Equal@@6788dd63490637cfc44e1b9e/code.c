#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b)
    {
        printf("Yes");
    }
    else if (a==b){
        printf("Equal");
    }
    else{
        printf("No");
    }
    return 0;
}
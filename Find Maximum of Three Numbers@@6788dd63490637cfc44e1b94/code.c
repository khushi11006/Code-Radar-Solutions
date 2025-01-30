#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if (a<b && c<b){
        printf("%d",b);
    }
    else if (b<c && a<c){
        printf("%d",c);
    }
    else{
        printf("%d",a);
    }
    return 0;
}
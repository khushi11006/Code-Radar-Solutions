#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int k=1;
        for(int k=a-i;k>0;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
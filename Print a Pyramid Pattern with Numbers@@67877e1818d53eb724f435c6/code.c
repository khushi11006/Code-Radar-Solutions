#include<stdio.h>
int main()
{
    int r;
    scanf("%d",&r);
    for(int i=1;i<=r;i++){
        int k=1;
        for(int k=r-i;k>0;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
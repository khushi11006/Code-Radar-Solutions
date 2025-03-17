#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int k =1;
    for(int i=a;i>=1;i--)
    {
        for (int j=i;j<=a;j++)
        {
            printf("%d ",k);
            k++;
        }
        printf("\n");

    }
}
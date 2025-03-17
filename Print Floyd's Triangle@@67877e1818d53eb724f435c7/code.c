#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    for(int i=a;i>=a;i--)
    {
        int k=1;
        for (int j=i;j<=a;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");

    }
}
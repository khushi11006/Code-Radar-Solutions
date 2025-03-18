#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        for(int j=i;j>=a-i+1;j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}    
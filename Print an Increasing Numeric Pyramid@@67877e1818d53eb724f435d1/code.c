#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++) //increasing
        {
            printf("%d",j);
        }
        for(int j=i;j>=1;j--) //decreasing
        {
            printf("%dj");
        }
        printf("\n");
    }
    return 0;
}

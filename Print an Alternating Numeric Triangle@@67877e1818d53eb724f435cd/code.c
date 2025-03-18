#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        for(int j=i;j<=i;j++)
        {
            if((i+j) % 2 ==0)
            {printf("1 ");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}    
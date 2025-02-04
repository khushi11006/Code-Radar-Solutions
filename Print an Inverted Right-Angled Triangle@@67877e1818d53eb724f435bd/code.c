#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for (int i=n; i>=1 ;i--){ //rows
        for (int j=1; j<=i ;j++){ //columns
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
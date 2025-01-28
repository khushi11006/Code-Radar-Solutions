#include <stdio.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    if (a>=A && a<=Z)
    {
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
    return 0;
}
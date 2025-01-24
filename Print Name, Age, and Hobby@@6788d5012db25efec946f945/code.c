#include <stdio.h>
int main()
{
    char name,age;
    char hobby[100];
    scanf("%c",&name);
    scanf("%c",&age);
    scanf("%s",&hobby);
    printf("Name: %c",name);
    printf("Age: %c",age);
    printf("Hobby: %s",hobby);
    return 0;

}
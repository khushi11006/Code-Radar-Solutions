#include <stdio.h>
int main(){
    int a,b;
    char sign;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&sign);
    if (sign == '+'){
        printf("%d\n", a+b);
    }
    else if(sign == '-'){
        printf("%d\n", a-b);
    }
    else if(sign == '*'){
        printf("%d\n", a*b);
    }
    else if(sign == '/'){
        if(b!=0)
        {
            printf("%d",a/b);
        }
        else{
            printf("invalid");
        }
    }
    else{
        printf("error");
    }
}
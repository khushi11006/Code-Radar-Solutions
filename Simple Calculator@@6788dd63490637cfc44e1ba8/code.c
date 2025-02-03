#include <stdio.h>
int main(){
    int a,b;
    char sign;
    scanf("%d %d %c", &a, &b, &sign);
    
    getchar();
    if (sign == '+'){
        printf("%d\n", a + b);
    }
    else if(sign == '-'){
        printf("%d\n", a - b);
    }
    else if(sign == '*'){
        printf("%d\n", a * b);
    }
    else if(sign == '/'){
        if(b!=0)
        {
            printf("%d",a / b);
        }
        else{
            printf("invalid\n");
        }
    }
    else{
        printf("error\n");
    }
    return 0;
}
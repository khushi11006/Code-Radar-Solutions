#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if (a = "AEIOU" && a = "aeiou"){
        printf("Vowel");
    }
    else if((a >= 'A' && a<= 'Z') || (a>='a' && a<='z')){
        printf("Consonant");
    }
    else if(a>=0 && a<=9)
    {
        printf("Digit");
    }
    else{
        printf("Special Character");
    }
    return 0;
}
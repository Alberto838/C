#include <stdio.h>

int fun(char* str) {
    char* temp = str;

    while(*temp != '\0'){
        if (*temp >= '0' && *temp <= '9')
            return temp - str;
        temp++;
    }

    return 0;
}


int main()
{
    printf("%d\n", fun("abc1"));
    return 0;
}

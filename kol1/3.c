#include <stdio.h>

int fun(int (*f)(int), int x) {
    return f(x) % 7;
}

int fun2(int x) {
    return 11;
}

int fun3(int x) {
    return x+5;
}

int main()
{
    printf("%d\n",fun(fun2,4));

    printf("%d\n", fun(fun3, 4));

    return 0;
}

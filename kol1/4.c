#include <stdio.h>

int fun(int n) {
    if (n == 0)
        return 0;
    int buf = fun(n - 1);
    if (buf - n > 0)
        return buf - n;
    else
        return buf + n;
}


int main()
{
    printf("%d\n", fun(1));
    printf("%d\n", fun(5));

    return 0;
}

#include <stdio.h>
#include <math.h>

int fun(int n) {
    int wynik = 0, buf = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            buf += 3 * pow(10, j);
        }
        wynik += buf;
        buf = 0;
    }
    return wynik;
}

int main()
{
    printf("%d",fun(4));    //3+33+333+3333 = 3702
    return 0;
}

//1.4.1 Napisz program wczytujący ze standardowego wejścia dwie dodatnie
//liczby całkowite n i m, i wypisujący w kolejnych wierszach
//na standardowym wyjściu wszystkie dodatnie wielokrotności n mniejsze od m

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m;

    printf("Podaj dwie dodatnie liczby calkowite:\n");
    scanf("%i\n%i", &n, &m);
    i=n;
    while(i<m)
    {
        printf("\n%i", i);
        i=i+n;
    }
    return 0;
}

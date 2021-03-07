//1.4.3  Napisz program wczytujący ze standardowego wejścia trzy dodatnie
//liczby całkowite n, m i k, i wypisujący w kolejnych wierszach wszystkie
//wielokrotności n większe od m i mniejsze od k

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, m, k;

    printf("Podaj trzy dodatnie liczby calkowite:\n");
    scanf("%i\n%i\n%i", &n, &m, &k);
    for (i=n; i<k; i=i+n)
    {
        if (i>m)
        printf("\n%d", i);
    }

    return 0;
}

//1.4.5 Napisz program, który wczytuje ze standardowego wejścia nieujemną
//liczbę całkowitą n i wypisuje na standardowym wyjściu sumę kwadratów liczb
//od 0 do n, czyli wartość 02 + 12 + 32 + ... + n^2.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, sum=0;
    printf("Podaj nieujemna liczbe calkowita: ");
    scanf("%i", &n);

    for(i=1; i<=n; i++)
        sum=sum+i*i;

    printf("Suma kwadratow liczb od 0 do %i: %i", n, sum);

    return 0;
}

//1.3.4 Napisz program, który wczytuje ze standardowego wejścia dwie liczby
//całkowite i wypisuje tą o większej wartości bezwzględnej.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, abw, bbw;
    scanf("%i\n%i",&a,&b);
    abw=a;
    bbw=b;
    if(a<0)
    {
        abw=-a;
    }
    if(b<0)
    {
        bbw=-b;
    }
    if(abw>=bbw)
    {
        printf("%d", abw);
    }
    else printf("%d", bbw);
}

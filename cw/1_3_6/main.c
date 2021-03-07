//1.3.6 Napisz program, który wczytuje ze standardowego wejścia współczynniki układu dwóch równań liniowych z dwoma niewiadomymi
//i wypisuje na standardowym wyjściu rozwiązanie układu równań. W przypadku nieskończonej liczby lub braku rozwiązań program powinien
//wypisać na standardowym wyjściu odpowiednią informację.

#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,d,e,f;
printf("Podaj kolejne wspolczynniki dwoch rownan liniowych:\n");
scanf("%f\n%f\n%f\n%f\n%f\n%f", &a, &b, &c, &d, &e, &f);

float wx, wy, w;
wx=c*e-b*f;
wy=a*f-c*d;
w=a*e-b*d;


if (w!=0)
    {
    printf("x = %f, y = %f", wx/w, wy/w);
    }
else if(wx==0&&wy==0)
    {
    printf("Nieskonczenie wiele rozwiazan.");
    }
else
    {
    printf("Brak rozwiazan.");
    }

return 0;

}

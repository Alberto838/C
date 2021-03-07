//1.3.8 Napisz program, który w zależności od wyboru użytkownika wczytuje ze standardowego wejścia wymiary:
//kwadratu, prostokąta lub trójkąta i wypisuje na standardowym wyjściu pole figury o wczytanych
//wymiarach.

#include <stdio.h>
#include <stdlib.h>
int main()
{
int i;
float a,b,h,p;


printf("1 - kwadrat\n");
printf("2 - prostokat\n");
printf("3 - trojkat\n");
printf("Podaj numer odpowiadajacy figurze: ");
scanf("%i",&i);
if (i==1){
    printf("Podaj dlugosc boku kwadratu: ");
    scanf("%f",&a);
    p=a*a;
    printf("Pole kwadratu wynosi: %f", p);
}
else if (i==2){
    printf("Podaj dlugosci bokow prostokata:\n");
    scanf("%f\n%f",&a,&b);
    p=a*b;
    printf("Pole prostokata wynosi: %f",p);
}
else if (i==3){
    printf("Podaj dlugosc podstawy i wysokosc\n");
    scanf("%f\n%f",&a,&h);
    p=0.5*a*h;
    printf("Pole trojkata wynosi: %f\n",p);
}
return 0;
}

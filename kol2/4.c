#include <stdio.h>

struct Film {
    char* tytul;
    int rok;
    float ocena;
};

struct Film fun(struct Film* filmy, int n) {
    struct Film wynik = filmy[0];
    for (int i = 0; i < n; i++) {
        if (wynik.ocena < filmy[i].ocena)
            wynik = filmy[i];
    }
    return wynik;
}


int main()
{
    struct Film filmy[] = { {"film1",2000,3.5}, {"film2",1999,4.5}, {"film3",2005,1.5} };
    int n = 3;

    struct Film wynik = fun(filmy, n);
    printf("%s %d, %f", wynik.tytul, wynik.rok, wynik.ocena);
    return 0;
}

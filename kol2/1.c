#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tab[3][4] = {{2,2,3,4},{2,2,0,7},{7,3,3}};
    int a=tab[1][-2]; //a=3
    int b=tab[2][-2]; //a=3  ,b=0
    a=b++; //a=0  ,b=1
    b=a^2;  //a=0  ,b=2
    a=(b+=3)+7;  //a=12  ,b=5
    b=**((tab)+2); //a=12  ,b=7
    ++a; //a=13  ,b=7
    return 0;
}

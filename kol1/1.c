#include <stdio.h>
#include <stdlib.h>

void foo(int* tab, int n)
{
    for(int i=0;i<n-2;i++)
    {
        *(tab+i)+=2;
    }
}

int main()
{
    int tab[] = {2,6,-4,15,2,9,8};
    int *wsk=tab-1;
    foo(wsk,5);
    int b = *(wsk+=4); //b=15
    int c = b+2; // b=15  , c=17
    int d = b^c; // b=15  , c=17  , d=30
    int e = (wsk+=-1)[2]; // b=15  , c=17  , d=30  , e=2
    e = (d -= 3) + (c += 3); // b=15  , c=20  , d=27  , e=47
    c = d - (b+=4); // b=19  , c=8  , d=27  , e=47
    b = *wsk + e; // b=43  , c=8  , d=27  , e=47
    e = (++d)*(b--); // b=42  , c=8  , d=28  , e=1204
    return 0;
}

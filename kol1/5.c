#include <stdio.h>

int* fun(int n, int *tab){
    for (int i = n - 1; i > 0; i--) {
        if (*(tab + i) % 2 != 0)
            return tab + i;
    }
    return tab;
}

int main()
{
    int n = 12;
    int tab[] = { 1,1,2,1,3,2,2,2,2,2,2,2 };
    printf("%d\n", *fun(n, tab));

    int n2 = 10;
    int tab2[] = { 2,4,2,4,6,2,4,6,2,6 };   //same elementy parzyste
    printf("%d\n", *fun(n2, tab2));

    return 0;
}

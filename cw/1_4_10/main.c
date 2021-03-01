#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int pierw;
    for(int i=0; i*i<=n; i++)
    {
        pierw=i;
    }
    printf("%d", pierw);
    return 0;
}

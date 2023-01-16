#include <stdio.h>

int numere[1000];

int main()
{   

    for ( int i = 2; i <= 1000; i++ )
    {
        if ( numere[i] != -1 )
        {
            for ( int j = i + i; j <= 1000; j += i )
            {
                numere[j] = -1;
            }
        }
    }

    int n;
    scanf("%d", &n);

    if( n > 1000)
    {
        printf("n > 1000");
        return 0;
    }

    if ( numere[n] != -1 )
    {
        printf("%d este prim", n);
    }
    else
    {
        printf("%d nu este prim", n);
    }
}
#include <stdio.h>

int main()
{
    int m; scanf("%d", &m);
    int n; scanf("%d", &n);

    int temp1 = m;
    int temp2 = n;

    while ( temp1 != temp2)
    {
        if ( temp1 > temp2 )
        {
            temp1 -= temp2;
        }
        else
        {
            temp2 -= temp1;
        }
    }

    printf("cmmdc = %d\n", temp1);
    printf("cmmmc = %d\n", (m*n) / temp1);
    
    return 0;

}
#include <stdio.h>
int main()
{
    int val, m, i;
    for ( i=0; i<5; i++ )
    {
        printf( "Por favor ingrese los numeros: %i", i+1);
        scanf("%i", &val);
        if (val<m)
        {
            m=val;
        }
    }
    printf(" El numero menor es: %i", m);
    return 0;
}
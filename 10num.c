#include <stdio.h>
int main()
{
    int n,i,mayor,menor,sum=0;
    printf("ingrese 10 numeros enteross\n");
    for ( i = 1; i <= 10; i++)
    {
        scanf("%d",&n);
        if (n>mayor)
        {
            mayor=n;
        }
        else if (n<menor)
        {
            menor=n;
        }
        sum=mayor+menor;
    }
    printf("el numero mayor es: %d",mayor);
    printf("\nel numero menor es: %d",menor);
    printf("\nla suma de el menor y mayor es: %d",sum);
}
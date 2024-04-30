#include <stdio.h>
int main()
{
    char l;
    printf(" Ingrese una letra\n ");
    scanf("%c", &l);
    if (l=='a' || l=='e'|| l=='i' || l=='o' || l=='u')
    {
        printf(" Su letra es una vocal\n ");
    }
    else
    {
        printf(" Su letra no es una vocal\n ");
    }
    return 0;
}
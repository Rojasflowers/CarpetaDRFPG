#include <stdio.h>
int main()
{
    int c;
printf("ingrese su número que tiene su carta");
scanf("%i",&c);
if (c==1)
{
printf("AS");
}
else if (c==10)
{
printf("SOTA");
}
else if (c==12)
{
printf("Rey");
}
else if (c==1)
{
printf("AS");
}
else if (c>=9 && c<=2)
{
    printf("no es ninguna figura ni tampoco AS");
}
else {
    printf("este num no es una baraja española:)");
    }
    return 0;
}
#include <stdio.h>
int main (){
char c; 
printf("ingresa una letra");
scanf("%c",&c);
switch (c)
{
case 'a':
case 'e':
case 'i': 
case 'o':
case 'u':
printf("%c es una vocal\n",c);
    break;
default:
printf("%c no es una vocal\n");
}
printf("este es un mjs new");
    return 0;
}
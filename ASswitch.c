#include <stdio.h>
int main (){
    int c;
printf("ingrese su número que tiene su carta");
scanf("%i",&c);
switch (c){
    case 1:
    printf("AS");
    break;
    case 10:
    printf("SOTA");
    break;
     case 12:
    printf("REY");
    break;
    default:
    if (c>=9 && c<=2)
{
    printf("no es ninguna figura ni tampoco AS");
}
else {
    printf("este num no es una baraja española:)");
    }
    
}
    
    return 0;
}
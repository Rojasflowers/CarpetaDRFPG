#include <stdio.h>
#include <math.h>
int main () {
int h,b,bmy,bmn,op;
double cat,catp,car;
printf("1.- CALCULAR EL ÁREA DE UN TRIÁNGULO\n");
printf("2.- CALCULAR EL ÁREA DE UN TRAPECIO\n");
printf("3.- CALCULAR EL ÁREA DE UN RECTÁNGULO\n");
printf("¿Cuál desea hacer?");
scanf("%i",&op);
switch (op)
{
case 1:
    printf("ingrese la base:");
    scanf("%i",&b);
    printf("ingrese su altura");
    scanf("%i",&h);
    cat=(b*h)/2;
    printf("su área es de: %.2f",cat);
    break;
case 2:
    printf("ingrese la base mayor:");
    scanf("%i",&bmy);
    printf("ingrese su base menor");
    scanf("%i",&bmn);
    catp=((bmy+bmn * h)/2);
    printf("su área es de: %.2f",catp);
    break;
    case 3:
    printf("ingrese la base:");
    scanf("%i",&b);
    printf("ingrese su altura");
    scanf("%i",&h);
    cat=(b*h);
    printf("su área es de: %.2f",cat);
    break;
default:
printf("no hay más rutassssssssss:(");
    break;
}
    return 0;
}
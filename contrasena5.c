#include <stdio.h>
#include <string.h>
void funcion1(){
    
	char u[100];
	char g[100];
	int num;
	int in=3;
	int nl=2;
	char gl[100]="2bpg";
	int pre,art, l, o;
    art=1;
	printf("Version 2");
	while (in>0){
 printf("Ingrese su usuario\n");
 scanf("%s", &u);
 printf("Ingrese su grado y grupo\n");
 scanf("%s", &g);
 printf("Ingrese su numero de lista\n");
 scanf("%d", &num);
 if (strcmp(g,gl)==0&&num==nl){
    printf("Bienvenido al sistema");
    while(art>0){
    printf("¿Cuantas piezas quieres llevar?\n");
    scanf("%i", &art);
    if(art>0){
    printf("¿Cual es el precio de la pieza?\n");
    scanf("%i", &pre);
    l=art*pre;
    o=o+l;}
    }
    printf("El total de tu factura es de:%d\n",o);
    in=0;
    }else{
    in--;
    if (in>0){
    printf("Error, te quedan\n");
    printf("%d\n", in);
    printf("Intentos\n");
    } else{
    printf("Has agotado tus intentos");
    }
    }
	}
}

int main(){
funcion1();
return 0;
}
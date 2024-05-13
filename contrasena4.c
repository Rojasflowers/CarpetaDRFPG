#include <stdio.h>
#include <string.h>
int main()
{
    
	char u[100];
	char g[100];
	int num;
	int in=3;
	int nl=2;
	char gl[100]="2bpg";
	int pre,art, l, o, i;
    art=1;
	while (in>0){
 printf("Ingrese su usuario\n");
 scanf("%s", &u);
 printf("Ingrese su grado y grupo\n");
 scanf("%s", &g);
 printf("Ingrese su numero de lista\n");
 scanf("%d", &num);
 if (strcmp(g,gl)==0&&num==nl){
    printf("Bienvenido al sistema");
        for (i=1;art>0;i--){
    printf("¿Cuantas piezas quieres llevar?\n");
    scanf("%i", &art);
    if(art>0){
    printf("¿Cual es el precio de la pieza?\n");
    scanf("%i", &art);
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
 return 0;
}

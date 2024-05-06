#include <stdio.h>
#include <math.h>
int main (){
    int n,r;
    printf("ingrese el número que se va a elevar al cuadrado:\n");
    scanf("%i",&n);
    r=pow(n,2);
    printf("el resultado es:%i",r);
 return 0;
}
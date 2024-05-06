#include <stdio.h>
int main (){
    int i,n,po,acum=1;
    printf("ingrese un número para elevarlo a su potencia\n");
    scanf("%i",&n);
    printf("potencia a la que se va a elevar\n");
    scanf("%i",&po);
for (i=0; i<po; i++)
{
   acum*=n;
}
    printf("%i",acum);
return 0;
}
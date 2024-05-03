#include <stdio.h>
int main()
{
	int n,co,a;
    co=0;
    do{
	printf("ingrese un número\n");
	scanf("%i",&n);
	printf("has introducido este número:\n %i\n",n);
    co=co+1;
    a=a+n;}
	while (n!=0);{
		printf("finalizado:se ha introducido el número 0\n");}
        printf("se contaron:%i\n",co);
        printf("se acumularon:%i\n",a);
	return 0;
}
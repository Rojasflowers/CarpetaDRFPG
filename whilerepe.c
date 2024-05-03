#include <stdio.h>
int main()
{
	int n;
    do{
	printf("ingrese un número\n");
	scanf("%i",&n);
	printf("has introducido este número:\n %i\n",n);}
	while (n!=0);{
		printf("finalizado:se ha introducido el número 0\n");}
	return 0;
}
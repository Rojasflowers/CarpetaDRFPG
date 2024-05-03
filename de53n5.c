#include <stdio.h>
int main()
{
	int i,n;
    printf("digite hasta qué número quiere ver?");
    scanf("%i",&n);
	for (int i = 0; i <n; i+=5)
	{
		printf("%i\n",i);
	}
	return 0;
}
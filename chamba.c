#include <stdio.h>

int main()
{
    int h;
    float s, sf,sn;
    printf("Ingrese las horas trabajadas:\n");
    scanf("%i",&h);
    printf("Ingrese el sueldo por hora:\n");
    scanf("%f",&s);
    if (h<40)
    {
    sf=h*s;    
    printf("Tu sueldo es de:\n");
    printf("%.2f", sf);
    }
    if (h<50)
    {
    sn=(h*s)*.5; 
    sf=(h*s)+sn;    
    printf("Tu sueldo es de:\n");
    printf("%.2f", sf);
    }
if (h>50)
    {
    sf=(h*s)*2;    
    printf("Tu sueldo es de:\n");
    printf("%.2f", sf);
    }
    return 0;
}
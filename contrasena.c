#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    int nl;
    char g[10];
    char c[] = "2n35";
    char ci[10];
    int in = 3;

    printf("Ingrese su nombre:\n ");
    scanf("%s", name);

    printf("Ingrese su número de lista:\n "); scanf("%d", &nl);

    printf("Ingrese su grupo:\n "); scanf("%s", g);

    while (in > 0) {
        printf("Ingrese la contraseña:\n ");
        scanf("%s",ci);

        if (strcmp(ci, c) == 0) {
            printf("Bienvenido al sistema :D\n");
            break;
        } else {
            printf("Se han superado el número de intentos permitidos :(");
        }
    }
    return 0;
}
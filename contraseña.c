#include <stdio.h>
#include <string.h>

int main() {
    char ca[] = "root1234";
    char c[20];
    int in = 0;

    while (in < 3) {
        printf("Introduce la contraseña: ");
        scanf("%s", c);

        if (strcmp(c, ca) == 0) {
            printf("Contraseña correcta eres un titán\n Acceso permitido\n");
            break;
        } else {
            in++;
            printf("Contraseña incorrecta tonto\n Te quedan %d intentos.\n", 3 - in);
        }
    }

    if (in == 3) {
        printf("Has agotado todos los intentos tontisimo\n Acceso denegado bot\n");
    }

    return 0;
}
#include <stdio.h>
#include <string.h>
int main() {
    char ca[] = "root1234";
    char c[10];
    int con = 0;

    while (con < 3) {
        printf("Introduce la contraseña: ");
        scanf("%s", c);

        if (strcmp(con, ca) == 0) {
            printf("Acceso permitido\n");
            break;
        } else {
            con++;
            printf("Contraseña incorrectaaa, tonto");
        }
    }

    if (con == 3) {
        printf("Has agotado todos los intentos. Acceso denegado.\n");
    }

    return 0;
}

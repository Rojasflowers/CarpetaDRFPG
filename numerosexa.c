#include <stdio.h>
int main() {
    int i = 1;
    int n;
    int ma, me, s;

    printf("Ingrese el primer número: ");
    scanf("%d", &n);
    ma = n;
    me = n;
    s = n;

    while (i < 10) {
        printf("Ingrese el siguiente número: ");
        scanf("%d", &n);

        s += n;

        if (n > ma) {
            ma = n;
        }

        if (n < me) {
            me = n;
        }
        i++;
    }
    printf("El mayor número ingresado es: %d\n", ma);
    printf("El menor número ingresado es: %d\n", me);
    printf("La sumatoria de los números es: %d\n", s);
    return 0;
}

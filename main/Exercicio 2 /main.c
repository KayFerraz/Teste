#include <stdio.h>

int pertenceSequenciaFibonacci(int numero) {
    int a = 0, b = 1, c;

    while (a <= numero) {
        if (a == numero) {
            return 1;
        }
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (pertenceSequenciaFibonacci(numero)) {
        printf("%d pertence à sequencia de Fibonacci.\n", numero);
    } else {
        printf("%d NAO pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}

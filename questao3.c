#include <stdio.h>

int main() {
    int valor;
    int n100, n50, n20, n10, n5, n2;

    printf("Digite o valor inteiro: ");
    scanf("%d", &valor);

    if (valor % 2 != 0 && valor % 5 != 0) {
        printf("Nao eh possivel pagar esse valor com as cedulas disponiveis.\n");
    } else {
        n100 = valor / 100;
        valor = valor % 100;

        n50 = valor / 50;
        valor = valor % 50;

        n20 = valor / 20;
        valor = valor % 20;

        n10 = valor / 10;
        valor = valor % 10;

        n5 = valor / 5;
        valor = valor % 5;

        n2 = valor / 2;
        valor = valor % 2;

        printf("Cedulas de 100: %d\n", n100);
        printf("Cedulas de 50: %d\n", n50);
        printf("Cedulas de 20: %d\n", n20);
        printf("Cedulas de 10: %d\n", n10);
        printf("Cedulas de 5: %d\n", n5);
        printf("Cedulas de 2: %d\n", n2);
    }

    return 0;
}

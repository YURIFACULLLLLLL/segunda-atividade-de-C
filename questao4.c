#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto, palpite;

    srand(time(NULL)); 
    numeroSecreto = rand() % 100 + 1; 

    do {
        printf("Digite seu palpite (1 a 100): ");
        scanf("%d", &palpite);

        if (palpite == numeroSecreto) {
            printf("Parabens, vc acertou!\n");
        }
        else if (palpite > numeroSecreto) {
            printf("Muito alto, tente um numero menor.\n");
        }
        else {
            printf("Muito baixo, tente um numero maior.\n");
        }
    } while (palpite != numeroSecreto);

    return 0;
}

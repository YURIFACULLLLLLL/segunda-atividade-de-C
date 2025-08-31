#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    printf("Digite a altura (m): ");
    scanf("%f", &altura);

        imc = peso / (altura * altura);

    printf("Seu IMC eh: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Classificacao: Abaixo do peso\n");
    }
    else if (imc >= 18.5 && imc <= 24.9) {
        printf("Classificacao: Peso normal\n");
    }
    else if (imc >= 25 && imc <= 29.9) {
        printf("Classificacao: Sobrepeso\n");
    }
    else if (imc >= 30 && imc <= 34.9) {
        printf("Classificacao: Obesidade grau I\n");
    }
    else if (imc >= 35 && imc <= 39.9) {
        printf("Classificacao: Obesidade grau II\n");
    }
    else {
        printf("Classificacao: Obesidade grau III\n");
    }

    return 0;
}

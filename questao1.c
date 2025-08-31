#include <stdio.h>

int main() {
    float a, b, c;

    
    printf("Digite o lado A: ");
    scanf("%f", &a);
    printf("Digite o lado B: ");
    scanf("%f", &b);
    printf("Digite o lado C: ");
    scanf("%f", &c);
    
    if (a + b > c && a + c > b && b + c > a) {
        printf("Os valores sao validos.\n");

        if (a == b && b == c) {
            printf("Triangulo Equilatero\n");
        }
        else if (a == b || a == c || b == c) {
            printf("Triangulo Isosceles\n");
        }
        else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os valores NAO formam um triangulo valido.\n");
    }

    return 0;
}

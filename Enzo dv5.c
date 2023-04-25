#include <stdio.h>

int main() {
    int num;

    // Lê o número inteiro
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Imprime o antecessor e o sucessor
    printf("O antecessor de %d é %d.\n", num, num - 1);
    printf("O sucessor de %d é %d.\n", num, num + 1);

    return 0;
}


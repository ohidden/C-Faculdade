#include <stdio.h>

int main() {
    int idade;

    // Lê a idade da pessoa
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Verifica se a idade é maior ou menor de idade
    if (idade >= 18) {
        printf("A pessoa é maior de idade.\n");
    } else {
        printf("A pessoa é menor de idade.\n");
    }

    return 0;
}


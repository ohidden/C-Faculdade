#include <stdio.h>

int main() {
    int idade;

    // L� a idade da pessoa
    printf("Digite a idade da pessoa: ");
    scanf("%d", &idade);

    // Verifica se a idade � maior ou menor de idade
    if (idade >= 18) {
        printf("A pessoa � maior de idade.\n");
    } else {
        printf("A pessoa � menor de idade.\n");
    }

    return 0;
}


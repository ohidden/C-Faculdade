#include <stdio.h>

int main() {
    char nome[100];
    int idade;

    // L� o nome da pessoa
    printf("Digite o seu nome: ");
    scanf("%[^\n]", nome);

    // L� a idade da pessoa
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Imprime a mensagem de sauda��o
    printf("Ol�, %s! Voc� tem %d anos.\n", nome, idade);

    return 0;
}


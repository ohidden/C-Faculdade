#include <stdio.h>

int main() {
    char nome[100];
    int idade;

    // Lê o nome da pessoa
    printf("Digite o seu nome: ");
    scanf("%[^\n]", nome);

    // Lê a idade da pessoa
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // Imprime a mensagem de saudação
    printf("Olá, %s! Você tem %d anos.\n", nome, idade);

    return 0;
}


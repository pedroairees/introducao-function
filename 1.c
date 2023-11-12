#include <stdio.h>

// Função que retorna o maior entre dois números
int maiorEntreDois(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int numero1, numero2;

    // Lê os dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    // Chama a função e imprime o resultado
    int resultado = maiorEntreDois(numero1, numero2);
    printf("O maior número é: %d\n", resultado);

    return 0;
}

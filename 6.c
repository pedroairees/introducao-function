#include <stdio.h>

// Função que calcula o IMC (Índice de Massa Corporal)
double calcularIMC(double peso, double altura) {
    double imc = peso / (altura * altura);
    return imc;
}

int main() {
    double peso, altura, imc;

    // Lê o peso e a altura do usuário
    printf("Digite o peso (em quilos): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    // Chama a função para calcular o IMC e imprime o resultado
    imc = calcularIMC(peso, altura);
    printf("O IMC dessa pessoa é: %.2f\n", imc);

    return 0;
}

#include <stdio.h>

// Função que calcula o volume de uma esfera
double calcularVolumeEsfera(double raio) {
    const double PI = 3.1414592;
    double volume = (4.0 / 3.0) * PI * raio * raio * raio;
    return volume;
}

int main() {
    double raio, volume;

    // Lê o raio da esfera do usuário
    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    // Chama a função para calcular o volume da esfera e imprime o resultado
    volume = calcularVolumeEsfera(raio);
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}

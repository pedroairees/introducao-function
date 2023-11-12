#include <stdio.h>
#include <math.h>

// Função que calcula o volume de um cilindro circular
double calcularVolumeCilindro(double altura, double raio) {
    double volume = M_PI * pow(raio, 2) * altura;
    return volume;
}

int main() {
    double altura, raio, volume;

    // Lê a altura e o raio do usuário
    printf("Digite a altura do cilindro: ");
    scanf("%lf", &altura);

    printf("Digite o raio do cilindro: ");
    scanf("%lf", &raio);

    // Chama a função para calcular o volume do cilindro e imprime o resultado
    volume = calcularVolumeCilindro(altura, raio);
    printf("O volume do cilindro é: %.2f\n", volume);

    return 0;
}

#include <stdio.h>

// Função que converte temperatura de Fahrenheit para Celsius
float converterFahrenheitParaCelsius(float temperaturaFahrenheit) {
    float temperaturaCelsius = (temperaturaFahrenheit - 32.0) * (5.0/9.0);
    return temperaturaCelsius;
}

int main() {
    float temperaturaFahrenheit, temperaturaCelsius;

    // Lê a temperatura em Fahrenheit do usuário
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &temperaturaFahrenheit);

    // Chama a função para converter a temperatura e imprime o resultado
    temperaturaCelsius = converterFahrenheitParaCelsius(temperaturaFahrenheit);
    printf("A temperatura em Celsius é: %.2f\n", temperaturaCelsius);

    return 0;
}

#include <stdio.h>

// Função que imprime o mês e sua quantidade de dias
void imprimirMesEQuantidadeDias(int numeroMes) {
    if (numeroMes < 1 || numeroMes > 12) {
        printf("Número de mês inválido.\n");
        return;
    }

    char *nomeMes;
    int quantidadeDias;

    // Determina o nome do mês e sua quantidade de dias
    switch (numeroMes) {
        case 1:
            nomeMes = "janeiro";
            quantidadeDias = 31;
            break;
        case 2:
            nomeMes = "fevereiro";
            quantidadeDias = 28; // Supondo que não é ano bissexto
            break;
        case 3:
            nomeMes = "março";
            quantidadeDias = 31;
            break;
        case 4:
            nomeMes = "abril";
            quantidadeDias = 30;
            break;
        case 5:
            nomeMes = "maio";
            quantidadeDias = 31;
            break;
        case 6:
            nomeMes = "junho";
            quantidadeDias = 30;
            break;
        case 7:
            nomeMes = "julho";
            quantidadeDias = 31;
            break;
        case 8:
            nomeMes = "agosto";
            quantidadeDias = 31;
            break;
        case 9:
            nomeMes = "setembro";
            quantidadeDias = 30;
            break;
        case 10:
            nomeMes = "outubro";
            quantidadeDias = 31;
            break;
        case 11:
            nomeMes = "novembro";
            quantidadeDias = 30;
            break;
        case 12:
            nomeMes = "dezembro";
            quantidadeDias = 31;
            break;
    }

    // Imprime o resultado na tela
    printf("Mês: %s\n", nomeMes);
    printf("Quantidade de dias: %d\n", quantidadeDias);
}

int main() {
    int numeroMes;

    // Lê o número do mês do usuário
    printf("Digite um número de 1 a 12: ");
    scanf("%d", &numeroMes);

    // Chama a função para imprimir o mês e a quantidade de dias
    imprimirMesEQuantidadeDias(numeroMes);

    return 0;
}

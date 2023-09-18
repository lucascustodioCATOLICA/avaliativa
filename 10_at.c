#include <stdio.h>

int main() {
    short cod_cidade[200];
    char estado[200][2];
    int num_veiculos[200];
    int num_acidentes[200];

    int iteracao = 0;
    do {
        printf("    DADOS USUARIO %d \n", iteracao+1);

        printf("Digite 1, 2, 3, 4 para o respectivo candidato. 5 = NULO e 6 = BRANCO \n");
        printf("Digite 0 para encerrar. \n");
        scanf("%d", &votos[iteracao]);

        iteracao++;
    } while (votos[iteracao-1] != 0);  

    return 0;
}
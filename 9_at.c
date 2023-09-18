#include <stdio.h>

int main() {
    short votos[100];

    int iteracao = 0;
    do {
        printf("    DADOS USUARIO %d \n", iteracao+1);

        printf("Digite 1, 2, 3, 4 para o respectivo candidato. 5 = NULO e 6 = BRANCO \n");
        printf("Digite 0 para encerrar. \n");
        scanf("%d", &votos[iteracao]);

        iteracao++;
    } while (votos[iteracao-1] != 0);

    short total_1 = 0;    
    short total_2 = 0;    
    short total_3 = 0;    
    short total_4 = 0;    
    short total_nulo = 0;    
    short total_branco = 0;    

    for (int i = 0; i < iteracao; i++) {
        switch (votos[i]) {
            case 1:
                total_1++;
                break;
            case 2:
                total_2++;
                break;
            case 3:
                total_3++;
                break;
            case 4:
                total_4++;
                break;
            case 5:
                total_nulo++;
                break;
            case 6:
                total_branco++;
                break;
        }
    }

    printf("TOTAL DE VOTOS CANDIDATO 1: %d \n", total_1);
    printf("TOTAL DE VOTOS CANDIDATO 2: %d \n", total_2);
    printf("TOTAL DE VOTOS CANDIDATO 3: %d \n", total_3);
    printf("TOTAL DE VOTOS CANDIDATO 4: %d \n", total_4);
    printf("TOTAL DE VOTOS NULOS: %d \n", total_nulo);
    printf("TOTAL DE VOTOS EM BRANCO: %d \n", total_branco);
    
    return 0;
}
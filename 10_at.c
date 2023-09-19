#include <stdio.h>

int main() {
    short cod_cidade[200];
    char estado[200][3];
    int num_veiculos[200];
    int num_acidentes[200];

    int iteracao = 0;
    do {
        printf("    DADOS Cidade %d \n", iteracao+1);

        printf("Digite o cod da cidade  \n");
        scanf("%d", &cod_cidade[iteracao]);

        printf("Digite o estado  \n");
        scanf("%s", &estado[iteracao][0]);

        printf("Digite o numero de veiculos  \n");
        scanf("%d", &num_veiculos[iteracao]);

        printf("Digite o numero de acidentes  \n");
        scanf("%d", &num_acidentes[iteracao]);

        iteracao++;
    } while (iteracao < 2);  

    int maior_indice_id = 0;
    int maior_indice_valor = 0;
    int menor_indice_id = 0;
    int menor_indice_valor = 32767;
    float media_veiculos = 0;
    float media_acidentes_rs = 0;

    for (int i = 0; i < iteracao; i++) {
        if (maior_indice_valor < num_acidentes[i]) {
            maior_indice_valor = num_acidentes[i];
            maior_indice_id = i;
        }
        if (menor_indice_valor > num_acidentes[i]) {
            menor_indice_valor = num_acidentes[i];
            menor_indice_id = i;
        }
        media_veiculos += num_veiculos[i];

        const char *ptr = &estado[i][0];
        if(ptr == "RS" || ptr == "rs") {
            media_acidentes_rs += num_acidentes[i];
        }
    }
    media_veiculos = media_veiculos / iteracao;
    media_acidentes_rs = media_acidentes_rs / iteracao;

    printf("A cidade com o menor numero de acidentes eh %d com %d acidentes. \n", cod_cidade[menor_indice_id], menor_indice_valor);
    printf("A cidade com o maior numero de acidentes eh %d com %d acidentes. \n", cod_cidade[maior_indice_id], maior_indice_valor);

    printf("A Media de veiculos entre as cidades eh %.2f \n", media_veiculos);
    printf("A Media de acidentes em RS eh %.2f", media_acidentes_rs);

    return 0;
}

#include <stdio.h>

int main() {
    short filhos[100];
    float salario[100];

    int iteracao = 0;
    do {
        printf("    DADOS USUARIO %d \n", iteracao+1);

        printf("Digite a quantidade de filhos \n");
        scanf("%d", &filhos[iteracao]);

        printf("Digite seu salario \n");
        scanf("%f", &salario[iteracao]);

        iteracao++;
    } while (salario[iteracao-1] >= 0);

    float media_filhos = 0;
    float media_salario = 0;
    float salario_ate_100 = 0;
    float maior_salario = 0;
    for (int i = 0; i < iteracao; i++) {
        media_filhos += filhos[i];
        media_salario += salario[i];
        if (salario[i] >= 100.0f) {
            salario_ate_100 += 1;
        }
        if(salario[i] > maior_salario) {
            maior_salario = salario[i];
        }
    }
    media_filhos = media_filhos / iteracao;
    media_salario = media_salario / iteracao;
    salario_ate_100 = ( salario_ate_100 / iteracao) * 100;

    printf("MEDIA DE FILHOS: %.2f \n", media_filhos);
    printf("MEDIA DE SALARIO: %.2f \n", media_salario);
    printf("PORCENTAGEM DE SALARIOS ATE R$100,00: %.2f \n", salario_ate_100);
    printf("MAIOR SALARIO: %.2f \n", maior_salario);
    printf("%d /n", iteracao);
    
    return 0;
}
// gcc 7_at.c -o 7_at.exe -lm

#include <stdio.h>
#include <math.h>

const int TOTAL_ALUNOS = 30;

int main() {
    int aluno = 1;
    float n1, n2, n3, media_aluno, media_total;

    while (aluno <= TOTAL_ALUNOS)
    {
        printf("\n--- ALUNO NUM. %d \n\n", aluno);
        printf("Informe a nota 1, nota 2 e nota 3: ");
        scanf("%f %f %f", &n1, &n2, &n3);

        media_aluno = (n1*2 + n2*4 + n3*3) / 10;
        media_total += media_aluno;

        printf("MEDIA: %.1f \n", media_aluno);
        if(media_aluno >= 7) {
            printf("APROVADO! \n");
        } else {
            printf("REPROVADO. \n");
        }

        aluno++;
    }
    
    media_total = media_total/TOTAL_ALUNOS;
    printf("\n--- \n");
    printf("\nMEDIA GERAL: %.1f \n", media_total);

    return 0;
}
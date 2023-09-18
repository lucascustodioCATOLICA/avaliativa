// gcc 6_at.c -o 6_at.exe -lm

#include <stdio.h>
#include <math.h>

int main() {    
    float x, y;

    printf("Informe os valores de x e y do ponto p1: ");
    scanf("%f %f", &x, &y);

    x = floorf(x * 10) / 10;
    y = floorf(y * 10) / 10;

    if (x == 0 && y == 0) {
        printf("Origem \n");
        return 0;
    }

    if (x == 0) {
        printf("Eixo Y \n");
        return 0;
    } else if (y == 0) {
        printf("Eixo X  \n");
        return 0;
    }

    if (x > 0) {
        if (y > 0) {
            printf("Q1");
        } else {
            printf("Q4");
        }
    } else {
        if (y > 0) {
            printf("Q2");
        } else {
            printf("Q3");
        }
    }
    printf("\n");

    return 0;
}
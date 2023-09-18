// gcc 5_at.c -o 5_at.exe -lm

#include <stdio.h>
#include <math.h>

int main() {    
    int xp1, xp2, yp1, yp2;

    printf("Informe os valores de x e y do ponto p1: ");
    scanf("%d %d", &xp1, &yp1);
    printf("Informe os valores de x e y do ponto p2: ");
    scanf("%d %d", &xp2, &yp2);

    float distancia = (float) sqrt(pow(xp1 - xp2, 2) + pow(yp1 - yp2, 2));

    printf("A distancia entre os pontos p1 e p2 eh %.4f. \n", distancia);

    return 0;
}
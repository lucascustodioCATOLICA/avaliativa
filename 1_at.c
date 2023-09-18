// gcc 1_at.c -o 1_at.exe -lm

#include <stdio.h>
#include <math.h>

int main() {
    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    float y = (float) ((5*x + 3) / sqrt(pow(x, 2) - 16));
    printf("f(x): %f \n", y);

    return 0;
}
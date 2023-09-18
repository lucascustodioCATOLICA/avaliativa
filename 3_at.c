#include <stdio.h>

int main() {    
    float x, y, z;

    printf("Digite a medida do 1 lado: ");
    scanf("%f", &x);
    printf("Digite a medida do 2 lado: ");
    scanf("%f", &y);
    printf("Digite a medida do 3 lado: ");
    scanf("%f", &z);

    if(x + y + z != 180) {
        printf("Os lados informados nao correspondem a um triangulo. \n");
        return 0;
    }

    if(x == y && x == z && y == z) {
        printf("O triangulo eh equilatero. \n");
        return 0;
    }

    if(x == y || x == z || y == z) {
        printf("O triangulo eh isosceles. \n");
        return 0;
    }

    printf("O triangulo eh escaleno. \n");
    return 0;

    return 0;
}
#include <stdio.h>

int main() {
    float altura_chico = 1.5, altura_ze = 1.1;
    int anos = 0, ze_maior_flag = 0;
    
    while(ze_maior_flag == 0) {
        anos += 1;

        if(altura_chico < altura_ze) {
            ze_maior_flag = 1;
        }

        altura_chico += 0.02;
        altura_ze += 0.03;
    }
    
    printf("Serao necessario %d anos para Ze ser maior que Chico. \n", anos);
    printf("Altura Chico: %f \n", altura_chico);
    printf("Altura Ze: %f \n", altura_ze);

    return 0;
}
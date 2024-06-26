/*
CURSO: ANÁLISE E DESENVOLVIMENTO DE SISTEMAS
DISCIPLINA: LINGUAGEM DE PROGRAMAÇÃO II
TUTOR(A): KARINA LUIZA SILVA TEIXEIRA
ALUNO: JEAN GONÇALVES LIMA
*/

#include <stdio.h>

#define NUM_PESSOAS 5

int main() {
    char nomes[NUM_PESSOAS][50] = {"Fernando", "Luiz", "Jeffter", "Carlos", "Ana"};
    float pesos[NUM_PESSOAS] = {60, 80, 110, 48, 56};
    float somaPesos = 0.0, mediaPesos;
    int i, acimaMedia = 0;

    // Cálculo da soma dos pesos
    for(i = 0; i < NUM_PESSOAS; i++) {
        somaPesos += pesos[i];
    }

    // Cálculo da média dos pesos
    mediaPesos = somaPesos / NUM_PESSOAS;

    // Contagem de pessoas acima do peso médio
    for(i = 0; i < NUM_PESSOAS; i++) {
        if(pesos[i] > mediaPesos) {
            acimaMedia++;
        }
    }

    // Exibição dos resultados
    printf("A média aritmética dos pesos é: %.2f\n", mediaPesos);
    printf("%d pessoas estão com o peso acima da média.\n", acimaMedia);
    printf("As pessoas que possuem os pesos acima da média são:\n");

    for(i = 0; i < NUM_PESSOAS; i++) {
        if(pesos[i] > mediaPesos) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}

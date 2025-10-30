#include <stdio.h>

// ===============================
// Função recursiva para a TORRE
// ===============================
// A torre se move em linha reta. Aqui ela vai mover 5 casas para a direita.
void moverTorre(int casa, int totalCasas) {
    if (casa > totalCasas) return; // Caso base da recursão
    printf("Casa %d: Direita\n", casa);
    moverTorre(casa + 1, totalCasas); // Chamada recursiva
}

// ===============================
// Função recursiva para o BISPO
// ===============================
// O bispo se move na diagonal, aqui ele move 5 casas para cima e à direita.
// Além da recursão, ele usa loops aninhados (um vertical e um horizontal).
void moverBispo(int vertical, int horizontal, int limite) {
    if (vertical > limite) return; // Caso base da recursão

    // Loop externo: movimento vertical
    for (int v = 1; v <= 1; v++) {
        // Loop interno: movimento horizontal
        for (int h = 1; h <= 1; h++) {
            printf("Casa %d: Cima, Direita\n", vertical);
        }
    }

    moverBispo(vertical + 1, horizontal + 1, limite); // Chamada recursiva
}

// ===============================
// Função recursiva para a RAINHA
// ===============================
// A rainha se move em todas as direções, aqui move 8 casas para a esquerda.
void moverRainha(int casa, int totalCasas) {
    if (casa > totalCasas) return; // Caso base
    printf("Casa %d: Esquerda\n", casa);
    moverRainha(casa + 1, totalCasas);
}

// ===============================
// Função para o CAVALO
// ===============================
// O cavalo move-se em "L": 2 casas para cima e 1 para a direita.
// Aqui usamos loops aninhados com múltiplas variáveis e controle com break/continue.
void moverCavalo() {
    int casasCima = 2;
    int casasDireita = 1;

    printf("Movimento do CAVALO:\n");

    for (int i = 1; i <= casasCima; i++) {
        printf("Casa %d: Cima\n", i);

        // Quando estiver na segunda casa, executa o movimento lateral
        if (i == casasCima) {
            for (int j = 1; j <= casasDireita; j++) {
                if (j == 1) {
                    printf("Casa %d: Direita\n", i + j);
                } else {
                    continue; // Exemplo de uso do continue
                }
            }
            break; // Encerra após completar o movimento em "L"
        }
    }
}

// ===============================
// Função principal
// ===============================
int main() {
    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da TORRE:\n");
    moverTorre(1, casasTorre);

    printf("\nMovimento do BISPO:\n");
    moverBispo(1, 1, casasBispo);

    printf("\nMovimento da RAINHA:\n");
    moverRainha(1, casasRainha);

    printf("\n");
    moverCavalo();

    printf("\nFim da simulacao de movimentos!\n");
    return 0;
}

#include <stdio.h>

int main() {
    // ==========================
    // MOVIMENTAÇÃO DAS PEÇAS DE XADREZ
    // Torre, Bispo e Rainha
    // ==========================
    // Cada peça usa uma estrutura de repetição diferente:
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while

    // ==========================
    // TORRE
    // ==========================
    // A torre move-se em linha reta, horizontal ou verticalmente.
    // Aqui ela vai se mover 5 casas para a direita.
    int casasTorre = 5;
    printf("Movimento da TORRE:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // ==========================
    // BISPO
    // ==========================
    // O bispo move-se na diagonal.
    // Aqui ele vai se mover 5 casas para cima e à direita.
    int casasBispo = 5;
    int contador = 1;
    printf("\nMovimento do BISPO:\n");
    while (contador <= casasBispo) {
        printf("Casa %d: Cima, Direita\n", contador);
        contador++;
    }

    // ==========================
    // RAINHA
    // ==========================
    // A rainha move-se em todas as direções.
    // Aqui ela vai se mover 8 casas para a esquerda.
    int casasRainha = 8;
    int pos = 1;
    printf("\nMovimento da RAINHA:\n");
    do {
        printf("Casa %d: Esquerda\n", pos);
        pos++;
    } while (pos <= casasRainha);

    // Fim do programa
    printf("\nFim da simulação de movimentos!\n");
    return 0;
}
#include <stdio.h>

int main() {
    // ==========================
    // MOVIMENTAÇÃO DAS PEÇAS DE XADREZ
    // Torre, Bispo, Rainha e Cavalo
    // ==========================
    // Cada peça usa uma estrutura de repetição diferente:
    // Torre -> for
    // Bispo -> while
    // Rainha -> do-while
    // Cavalo -> loops aninhados (for + while)

    // ==========================
    // TORRE
    // ==========================
    // A torre move-se em linha reta horizontalmente ou verticalmente.
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

    // ==========================
    // CAVALO
    // ==========================
    // O cavalo move-se em "L".
    // Neste caso: 2 casas para baixo e 1 para a esquerda.
    // Usaremos um loop for (para o movimento vertical)
    // e dentro dele um loop while (para o movimento horizontal).

    int casasBaixo = 2;   // Duas casas para baixo
    int casasEsquerda = 1; // Uma casa para a esquerda
    int j = 1; // contador do loop interno

    printf("\nMovimento do CAVALO:\n");

    // Loop externo: movimento para baixo (duas casas)
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Casa %d: Baixo\n", i);
    }

    // Loop interno: movimento para a esquerda (uma casa)
    while (j <= casasEsquerda) {
        printf("Casa %d: Esquerda\n", casasBaixo + j);
        j++;
    }

    // ==========================
    // FIM DO PROGRAMA
    // ==========================
    printf("\nFim da simulação de movimentos!\n");
    return 0;
}
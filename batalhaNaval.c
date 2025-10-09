#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

   // Letras das colunas (A até J)
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    // Criação do tabuleiro 10x10 (todas as posições começam em 0)
    int tabuleiro[10][10] = {0};

    // ----------------------------
    // 1 Etapa: mostrar o tabuleiro vazio (sem navios)
    // ----------------------------

    printf("=== TABULEIRO INICIAL ===\n\n");

    // Cabeçalho com as letras das colunas
    printf("    "); // espaço para alinhar com os números da primeira coluna
    for (int c = 0; c < 10; c++) {
        printf("%c  ", coluna[c]);
    }
    printf("\n");

    // Corpo do tabuleiro (linhas numeradas)
    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1); // imprime o número da linha (1–10)
        for (int j = 0; j < 10; j++) {
            printf("0  "); // símbolo do mar (posição vazia)
        }
        printf("\n");
    }

    // ----------------------------
    // 2 Etapa: posicionar navios
    // ----------------------------

    // Navio horizontal (linha 2, colunas B a D)
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;

    // Navio vertical (coluna F, linhas 4 a 6)
    tabuleiro[3][5] = 3;
    tabuleiro[4][5] = 3;
    tabuleiro[5][5] = 3;

    // Navio diagonal - cima/baixo - esquerda/direita (coluna A a C, linhas 3 a 5)
    tabuleiro[2][0] = 3;
    tabuleiro[3][1] = 3;
    tabuleiro[4][2] = 3;

    // Navio diagonal - baixo/cima - direita/esquerda (coluna G a I, linhas 9 a 7)
    tabuleiro[9][6] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[7][8] = 3;

    // ----------------------------
    // 3 Etapa: mostrar o tabuleiro com os navios
    // ----------------------------

    printf("\n=== TABULEIRO COM OS NAVIOS ===\n\n");

    // Cabeçalho novamente
    printf("    ");
    for (int c = 0; c < 10; c++) {
        printf("%c  ", coluna[c]);
    }
    printf("\n");

    // Agora percorre a matriz e mostra onde há navios
    for (int i = 0; i < 10; i++) {
        printf("%2d  ", i + 1);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 3) {
                printf("3  "); // navio
            } else {
                printf("0  "); // mar
            }
        }
        printf("\n");
    }


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}

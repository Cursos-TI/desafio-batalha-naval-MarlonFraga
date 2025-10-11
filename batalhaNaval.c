#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.


    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

 


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

   
int main() {
    // ===== Parte 1: Criação do Tabuleiro =====
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];
    int linha, colunaIndex;

    // Preenche o tabuleiro com água (0)
    for (linha = 0; linha < 10; linha++) {
        for (colunaIndex = 0; colunaIndex < 10; colunaIndex++) {
            tabuleiro[linha][colunaIndex] = 0;
        }
    }

    // ===== Parte 2: Posicionamento dos Navios (valor 3) =====
    // Navio horizontal
    for (colunaIndex = 5; colunaIndex < 8; colunaIndex++) {
        tabuleiro[2][colunaIndex] = 3;
    }

    // Navio vertical
    for (linha = 7; linha < 10; linha++) {
        tabuleiro[linha][7] = 3;
    }

    // Navio diagonal principal (↘) — de cima para baixo
    for (linha = 3; linha < 6; linha++) {
        int col = linha; // coluna segue o mesmo número da linha
        tabuleiro[linha][col] = 3;
    }

    // Navio diagonal secundária (↗) — de baixo para cima
    for (linha = 6; linha < 9; linha++) {
        int col = 8 - linha; // colunas diminuem enquanto linha aumenta
        tabuleiro[linha][col] = 3;
    }

    // ===== Parte 3: Exibir Tabuleiro Inicial =====
    printf("\n=== TABULEIRO INICIAL ===\n\n");
    printf("    ");
    for (colunaIndex = 0; colunaIndex < 10; colunaIndex++) {
        printf("%c  ", coluna[colunaIndex]);
    }
    printf("\n");

    for (linha = 0; linha < 10; linha++) {
        printf("%2d  ", linha + 1);
        for (colunaIndex = 0; colunaIndex < 10; colunaIndex++) {
            printf("%d  ", tabuleiro[linha][colunaIndex]);
        }
        printf("\n");
    }

    // ===== Parte 4: Criação das Habilidades =====
    int tamanho = 5;
    int cone[5][5];
    int cruz[5][5];
    int octaedro[5][5];

    // ===== Habilidade CONE =====
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            if (linha == 0) {
                if (colunaIndex == 2)
                    cone[linha][colunaIndex] = 1;
                else
                    cone[linha][colunaIndex] = 0;
            } 
            else if (linha == 1) {
                if (colunaIndex >= 1 && colunaIndex <= 3)
                    cone[linha][colunaIndex] = 1;
                else
                    cone[linha][colunaIndex] = 0;
            } 
            else if (linha == 2) {
                if (colunaIndex >= 0 && colunaIndex <= 4)
                    cone[linha][colunaIndex] = 1;
                else
                    cone[linha][colunaIndex] = 0;
            } 
            else {
                cone[linha][colunaIndex] = 0;
            }
        }
    }

    printf("\nExemplo de saída de habilidade em CONE:\n");
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            printf("%d ", cone[linha][colunaIndex]);
        }
        printf("\n");
    }

    // ===== Habilidade CRUZ =====
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            if (linha == 2)
                cruz[linha][colunaIndex] = 1;
            else if (colunaIndex == 2)
                cruz[linha][colunaIndex] = 1;
            else
                cruz[linha][colunaIndex] = 0;
        }
    }

    printf("\nExemplo de saída de habilidade em CRUZ:\n");
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            printf("%d ", cruz[linha][colunaIndex]);
        }
        printf("\n");
    }

    // ===== Habilidade OCTAEDRO =====
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            if (linha == 0) {
                if (colunaIndex == 2)
                    octaedro[linha][colunaIndex] = 1;
                else
                    octaedro[linha][colunaIndex] = 0;
            } 
            else if (linha == 1) {
                if (colunaIndex >= 1 && colunaIndex <= 3)
                    octaedro[linha][colunaIndex] = 1;
                else
                    octaedro[linha][colunaIndex] = 0;
            } 
            else if (linha == 2) {
                if (colunaIndex >= 0 && colunaIndex <= 4)
                    octaedro[linha][colunaIndex] = 1;
                else
                    octaedro[linha][colunaIndex] = 0;
            } 
            else if (linha == 3) {
                if (colunaIndex >= 1 && colunaIndex <= 3)
                    octaedro[linha][colunaIndex] = 1;
                else
                    octaedro[linha][colunaIndex] = 0;
            } 
            else if (linha == 4) {
                if (colunaIndex == 2)
                    octaedro[linha][colunaIndex] = 1;
                else
                    octaedro[linha][colunaIndex] = 0;
            }
        }
    }

    printf("\nExemplo de saída de habilidade em OCTAEDRO:\n");
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            printf("%d ", octaedro[linha][colunaIndex]);
        }
        printf("\n");
    }

    // ===== Parte 5: Aplicar Habilidade no Tabuleiro =====
    int origemLinhaCone = 1, origemColunaCone = 1;
    int origemLinhaCruz = 3, origemColunaCruz = 4;
    int origemLinhaOcta = 5, origemColunaOcta = 5;

    // Função de sobreposição
    for (linha = 0; linha < tamanho; linha++) {
        for (colunaIndex = 0; colunaIndex < tamanho; colunaIndex++) {
            // CONE
            if (cone[linha][colunaIndex] == 1) {
                int lin = origemLinhaCone + linha;
                int col = origemColunaCone + colunaIndex;
                if (lin < 10 && col < 10)
                    tabuleiro[lin][col] = 5;
            }
            // CRUZ
            if (cruz[linha][colunaIndex] == 1) {
                int lin = origemLinhaCruz + linha;
                int col = origemColunaCruz + colunaIndex;
                if (lin < 10 && col < 10)
                    tabuleiro[lin][col] = 5;
            }
            // OCTAEDRO
            if (octaedro[linha][colunaIndex] == 1) {
                int lin = origemLinhaOcta + linha;
                int col = origemColunaOcta + colunaIndex;
                if (lin < 10 && col < 10)
                    tabuleiro[lin][col] = 5;
            }
        }
    }

    // ===== Parte 6: Exibir Tabuleiro com Habilidades =====
    printf("\n=== TABULEIRO COM AS HABILIDADES ===\n\n");
    printf("    ");
    for (colunaIndex = 0; colunaIndex < 10; colunaIndex++)
        printf("%c  ", coluna[colunaIndex]);
    printf("\n");

    for (linha = 0; linha < 10; linha++) {
        printf("%2d  ", linha + 1);
        for (colunaIndex = 0; colunaIndex < 10; colunaIndex++) {
            if (tabuleiro[linha][colunaIndex] == 5)
                printf("5  "); // área da habilidade
            else
                printf("0  "); // água
        }
        printf("\n");
    }

    return 0;
}

   


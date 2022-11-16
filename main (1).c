#include <stdio.h>

void mat(int linhas, int colunas) {
  int i, j;
  int matriz[linhas][colunas];
  for (i = 0; i < linhas; i++) {
    for (j = 0; j < colunas; j++) {
      printf("\nDigite o valor da posicao [%d][%d]: ", i, j);
      scanf("%d", &matriz[linhas][colunas]);
      if (matriz[linhas][colunas] == 1) {
        if (i == j) {
          printf("\nNa cidade %d ha estrada!\n", i);
        } else {
          printf("\nDa cidade %d a cidade %d ha uma estrada!\n", i, j);
        }
      } else if (matriz[linhas][colunas] != 1) {
        if (i == j) {
          printf("\nNao ha estrada na cidade %d!\n", i);
        } else {
          printf("\nNao ha estrada ligando a cidade %d e a cidade %d!\n", i, j);
        }
      }
    }
  }
}
int main(void) {
  int linhas, colunas = 3;
  int matriz[3][3];
  mat(3, 3);
  return 0;
}

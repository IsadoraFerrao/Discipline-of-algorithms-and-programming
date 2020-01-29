#include <stdio.h>
#define LINHAS 3 //numero de linhas
#define COLUNAS 4 //numero de colunas
int main() {
 int m[LINHAS][COLUNAS] = {1,2,3,4,5,6,6,5,4,3,2,1};
 int i, j;
 for(i = 0; i < LINHAS; i++) { //percorre linhas
 for(j = 0; j < COLUNAS; j++) {//percorre colunas
 printf("%3d", m[i][j]);
 }
 printf("\n");
 }
}

#include <stdio.h>
#define LINHAS 4
#define COLUNAS 4
int main() {
 int m[LINHAS][COLUNAS] = {1,2,3,4,5,6,7,8,9,10,11,12,
 13,14,15,16}, i, j, soma = 0;
 for(i = 0; i < LINHAS; i++) {
 for(j = 0; j < COLUNAS; j++) {
 if(i > j)
 soma = soma + m[i][j];
 }
 
 
 
 
 1  2  3 4
 5  6  7 8
 9 10 11 12
 1314 15 16
 }
 printf("Soma abaixo diagonal principal = %d\n", soma);
}

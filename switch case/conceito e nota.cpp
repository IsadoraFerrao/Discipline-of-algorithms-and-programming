#include <stdio.h>
int main() {
 char conceito;
 printf("Digite conceito (A,B,C ou D)");
 scanf("%c", &conceito);
 /* Testa e imprime resposta */
 switch(conceito){
 case 'A':
 printf("Nota: >= 9 e <= 10\n");
 break;
 case 'B':
 printf("Nota: >= 8 e < 9\n");
 break;
 case 'C':
 printf("Nota: >= 7 e < 8\n");
 break;
 case 'D':
 printf("Nota: < 7\n");
 break;
 default:
 printf("Conceito invalido");
 }
}

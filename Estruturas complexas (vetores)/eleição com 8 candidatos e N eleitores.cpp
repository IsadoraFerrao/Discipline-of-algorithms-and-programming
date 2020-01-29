//Escreva um programa que simula uma
//eleição com 8 candidatos e N eleitores, onde
//N é informado pelo usuário.
////contabilizá-lo, ou seja, incrementar a
//quantdade de votos que um candidato recebeu,
//ou incrementar a quantdade de votos nulos
//(caso o eleitor não tenha votado em nenhum
//candidato).

#include <stdio.h>
int main() {
 int C0, C1, C2, C3, C4, C5, C6, C7, voto, nulos, n, i;
 C0 = C1 = C2 = C3 = C4 = C5 = C6 = C7 = nulos = 0;
 printf("Digite o numero de votantes: ");
 scanf("%d", &n);
 for(i = 1; i <= n; i++) {
 printf("\tDigite o numero do seu candidato: ");
 scanf("%d", &voto);
 switch(voto) {
 case 0: C0++; break;
 case 1: C1++; break;
 case 2: C2++; break;
 case 3: C3++; break;
 case 4: C4++; break;
 case 5: C5++; break;
 case 6: C6++; break;
 case 7: C7++; break;
 default: nulos++;
 }
 }
 printf("\n\nResultado da eleicao:\n\n");
 printf("\tCand0: %d\n\tCand1: %d\n", C0, C1);
 printf("\tCand2: %d\n\tCand3: %d\n", C2, C3);
 printf("\tCand4: %d\n\tCand5: %d\n", C4, C5);
 printf("\tCand6: %d\n\tCand7: %d\n", C6, C7);
 printf("\tNulos: %d\n", nulos);
}

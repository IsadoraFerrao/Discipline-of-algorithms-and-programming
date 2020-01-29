#include <stdio.h>

int main() {
 int n, numeroSecreto = 13;
 printf("Advinhe o numero secreto: ");
 scanf("%d", &n);
 while(n != numeroSecreto) {
 printf("Advinhe o numero secreto: ");
 scanf("%d", &n);
 }
 printf("Parabens! Voce acertou!\n");
}

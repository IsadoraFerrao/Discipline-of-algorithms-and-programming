#include <stdio.h>
int main() {
 int n, numeroSecreto = 13;
 do {
 printf("Adivinhe o numero secreto:");
 scanf("%d", &n);
 } while(n != numeroSecreto);
 printf("Parabens! Voce acertou!\n");
}

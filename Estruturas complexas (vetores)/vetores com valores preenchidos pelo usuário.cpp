#include <stdio.h>
int main() {
 float a[10];
 int i;
 for(i = 0; i < 10; i++) {
 printf("Digite o valor da posicao %d: ", i);
 scanf("%f", &a[i]);
 }
 printf("\nVetor preenchido:\n");
 for(i = 0; i < 10; i++) {
 printf("a[%d] -> %f\n", i, a[i]);
 }
}

#include <stdio.h>
#include <math.h>
int main() {
 float f;
 printf("Digite um numero: ");
 scanf("%f", &f);
 if(f >= 0) {
 printf("numero positivo!\n");
 printf("raiz do numero %f = %f\n", sqrt(f));
 } else {
 printf("numero negativo!\n", f);
 printf("%f nao possui raiz real\n", f);
 }
}

#include <stdio.h>
int main() {
 float a, b, c;
 printf("Digite os 3 lados do tri�ngulo: ");
 scanf("%f %f %f", &a, &b, &c);
 if((a < b + c) && (b < a + c) && (c < a + b)) {
 /* Estes valores formam um tri�ngulo!*/
 /* testar se eh equilatero*/
 if((a == b) && (b == c))
 printf("Triangulo retangulo!\n");
 else {
 /* testar se eh isoscles*/
 if((a == b) || (a == c) || (b == c))
 printf("Triangulo isosceles!\n");
 else
 printf("Triangulo escaleno!\n");
 }
 } else {
 printf("Estes valores n�o formam um tri�ngulo!\n");
 }
}





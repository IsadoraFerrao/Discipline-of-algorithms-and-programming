#include <stdio.h>
int main() {
 int A, B;
 printf("Digite A e B, onde A < B: ");
 scanf("%d %d", &A, &B);
 printf("Os numeros de %d a %d:\n", A, B);
 while (A <= B) {
 printf("%d\n", A);
 A = A + 1;
 }
}

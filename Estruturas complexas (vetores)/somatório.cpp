#include <stdio.h>
int main() {
 int v[7] = {3,5,2,0,4,8,8};
 int i, soma = 0;
 for(i = 0; i < 7; i++) {
 soma = soma + v[i];
 }
 printf("Somatorio = %d\n",soma);
}


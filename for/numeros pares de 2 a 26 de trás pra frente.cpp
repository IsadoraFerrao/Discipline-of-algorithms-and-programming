#include <stdio.h>
//Implemente um programa em C que imprime os
//n�meros pares entre 2 e 26 de tr�s para frente,
//usando o comando de repet��o for. Deve-se para
//isso determinar corretamente o valor de
//inicializa��o; a condi��o para execu��o; e ainda o
//incremento/decremento a ser realizado no for.

int main(){
	int N;
	
	for(N=26; N>=2; N=N-2){
		printf("%d\n", N);
	}
}

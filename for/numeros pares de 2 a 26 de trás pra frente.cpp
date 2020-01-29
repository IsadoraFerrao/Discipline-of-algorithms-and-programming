#include <stdio.h>
//Implemente um programa em C que imprime os
//números pares entre 2 e 26 de trás para frente,
//usando o comando de repetção for. Deve-se para
//isso determinar corretamente o valor de
//inicialização; a condição para execução; e ainda o
//incremento/decremento a ser realizado no for.

int main(){
	int N;
	
	for(N=26; N>=2; N=N-2){
		printf("%d\n", N);
	}
}

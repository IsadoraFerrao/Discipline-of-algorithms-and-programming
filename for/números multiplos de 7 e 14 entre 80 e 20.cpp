#include <stdio.h>
//números múltplos de 7 ou 13 entre 20 e 80. Para
//descobrir se um número é múltiplo use a
//operação que retorna o resto da divisão de dois
//números inteiros. Por exemplo, 8 % 2 retorna 0 ao
//passo que 5 % 2 retorna 1.

int main(){
	int N;
	
	for(N=20; N<=80; N++){
		if(N%7==0 || N%13==0)
		printf("%d\n", N);
	}
}

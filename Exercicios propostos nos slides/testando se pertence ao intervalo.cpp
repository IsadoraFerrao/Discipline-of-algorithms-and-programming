#include <stdio.h>
							 /* ESCREVA UM PROGRAMA EM C que leia um n�mero e
							 testa se ele pertence ao seguinte intervalo num�rico
							 (-6,13]U[42,1024)U(2048, infinito(8) */
 	int main(){
 		int x;
 		printf("Escreva um numero ");
 		scanf("%d", &x);
 		if(-6<x<=13 && 42>x<1024 && x>2048){
 			printf("Pertence ");
 		}
 		else	{
 			printf("N�o pertence ao invervalo");
	}
	 }
 


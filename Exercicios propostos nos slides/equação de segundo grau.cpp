#include <stdio.h>
#include <math.h>
							 /* ESCREVA UM PROGRAMA EM C que leia os coeficientes
							 A, B e C de uma equa��o de segundo grau da forma
							 Ax�+Bx+C e escreva suas ra�zes reais. Se A for zero
							 ou se a equa��o n�o tiver ra�zes, o programa deve
							 escrever uma mensagem de erro explicando a situa��o */
 	int main(){
 		int A, B, C, RAIZONE, RAIZTWO, delta;
 		
 		
 		printf("Digite os coeficientes A, B E C ");
 		scanf("%d %d %d", &A, &B, &C);
 		delta=(B*B)-4*A*C;
 		if(delta>0){
		 
 			RAIZONE=-B+pow(delta,1/2)/2*A;
 			RAIZTWO=-B-pow(delta,1/2)/2*A;
 			printf("As ra�zes s�o: %d e %d", &RAIZONE, &RAIZTWO );
 		}
 		else		 
 		if(delta==0) {
	
 			RAIZONE=-B+pow(delta,1/2)/2*A;
 			RAIZTWO=-B-pow(delta,1/2)/2*A;
 			printf("As ra�zes s�o iguais, sendo elas: %d e %d", &RAIZONE, &RAIZTWO );
 				}
 		else
 			printf("N�o existem raizes reais");
			}

 


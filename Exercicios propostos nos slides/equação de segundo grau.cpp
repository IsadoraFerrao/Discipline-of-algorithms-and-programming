#include <stdio.h>
#include <math.h>
							 /* ESCREVA UM PROGRAMA EM C que leia os coeficientes
							 A, B e C de uma equação de segundo grau da forma
							 Ax²+Bx+C e escreva suas raízes reais. Se A for zero
							 ou se a equação não tiver raízes, o programa deve
							 escrever uma mensagem de erro explicando a situação */
 	int main(){
 		int A, B, C, RAIZONE, RAIZTWO, delta;
 		
 		
 		printf("Digite os coeficientes A, B E C ");
 		scanf("%d %d %d", &A, &B, &C);
 		delta=(B*B)-4*A*C;
 		if(delta>0){
		 
 			RAIZONE=-B+pow(delta,1/2)/2*A;
 			RAIZTWO=-B-pow(delta,1/2)/2*A;
 			printf("As raízes são: %d e %d", &RAIZONE, &RAIZTWO );
 		}
 		else		 
 		if(delta==0) {
	
 			RAIZONE=-B+pow(delta,1/2)/2*A;
 			RAIZTWO=-B-pow(delta,1/2)/2*A;
 			printf("As raízes são iguais, sendo elas: %d e %d", &RAIZONE, &RAIZTWO );
 				}
 		else
 			printf("Não existem raizes reais");
			}

 


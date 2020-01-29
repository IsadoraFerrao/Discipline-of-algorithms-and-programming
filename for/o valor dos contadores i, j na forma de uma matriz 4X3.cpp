#include <stdio.h>
//Implemente um programa em C que possui dois
//for aninhados (cada um com seu próprio contador,
//ex.: i e j). O programa deve imprimir o valor dos
//contadores i,j na forma de uma matriz.
//Implemente para uma matriz 4x3.
//exemplo:
//M11 M12 M13
//M21 M22 M23
//M31 M32 M33
//M41 M42 M43

int main(){
	int i, j;
	
	for(i=1; i<=4; i++){
		for(j=1; j<=3; j++){
		printf("M%d%d", i,j);
	}
}
}

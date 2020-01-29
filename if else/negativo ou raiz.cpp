#include <stdio.h>
#include <math.h>

int main (){
	float f;
	printf("Digite um numero: ");
	scanf("%f" , &f);
	if (f<0)
	printf("O numero é negativo\n");
	
	printf("raiz do numero %f = %f\n", f, sqrt(f));
}

#include <stdio.h>
#include <math.h>

int main(){
	float f;
	printf("Digite um numero: ");	
	scanf("%f", &f);
	if(f<0){
		printf("atencao: Numero digitado negativo. \n");
		printf("Convertendo %f para positivo.\n",f);
		f=f*-1;
	}
		printf("Raiz do numero %f = %f\n",f, sqrt(f));
	
	
	
	
}



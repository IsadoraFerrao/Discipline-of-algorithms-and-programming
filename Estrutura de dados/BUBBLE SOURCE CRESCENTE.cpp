#include <stdio.h>
int main (){
	int vet[10], cont, pos1, pos2, aux;
	printf("Digite 10 numeros: \n");
	for(cont=0;cont<10;cont++){
		scanf("%d", &vet[cont]);
	}
	printf("\n\n");
	for(pos1=0;pos1<10;pos1++){
		for(pos2=0;pos2<10;pos2++){
			if((vet[pos1])<(vet[pos2])){
				aux=vet[pos2];
				vet[pos2]=vet[pos1];
				vet[pos1]=aux;
			}
		}
	}
	printf("Em ordem crescente:\n");
	for(cont=0;cont<10;cont++){
		printf("%d",vet[cont]);
	}
	printf("\n\n");
}

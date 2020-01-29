#include<stdio.h>
int main () {
	int i, valores[10], flag, aux;
	for(i=0;i<10;i++){
		printf("Digite o valor %d => ", i+1);
		scanf ("%d",&valores[i]);
	}
	flag=1;
	while (flag==1) {
		flag=0;
		for (i=0;i<9;i++){
			if (valores[i] > valores[i+1]){
				aux=valores[i];
				valores[i]=valores[i+1];
				valores[i+1]=aux;
				flag=1;
			}
		}
	}
	for(i=0;i<10;i++) {
		printf("%d", valores[i]);
	}
}

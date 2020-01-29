#include <stdio.h>

int main(){
	int a,b,c,d,f, media;
	printf("Digite 5 numeros em ordem crescente");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &f);
	media=(a+b+c+d+f)/5;
	if(c>a && c>b && c<d && c<f ){
		printf("mediana e %d e a media e %d", c, media );
	}
	
	else{
		printf("ORDEM CRESCENTE");
	}
	
	}


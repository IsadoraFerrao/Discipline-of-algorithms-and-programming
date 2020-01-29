#include <stdio.h>
#include <math.h>
#define log10(x) log(x)/log(10);
float f(float x) {
 return pow(x,3)-3; // Função cuja raiz deve ser determinada
}
int main() {
 float A, B, erro, intervalo, ponto_medio, iteracoes; // A e B : pontos | Intervalo: tamanho|
iteracoes: número de iterações
 int teorema = 0; // Teorema do excelentissímo sr. Bolzano
 int nome; //IHC...

 printf("Caro usuário, digite seu nome por gentileza :D: \n");
 scanf("%d",&nome);

 printf("Sr. %d" nome, "digite o erro: \n");
 scanf("%f",&erro);
 printf("Sr. %d", nome, "digite o intervalo, por exemplo (ex. [3 : 5]): \n");
 scanf("%f %f", &A, &B);
 teorema=(f(A)*f(B)>0); //Após testar ocorre uma troca de sinal no intervalo, existindo
assim uma raíz.
 while(teorema == 0) {
 printf("\n Querido, seu intervalo [%f : %f] não condiz com o Teorema. Mas você tem uma
nova chance, tente novamente \n : ",A,B);
 scanf("%f %f", &A, &B);
 teorema= (f(A)*f(B) > 0);
 }
 // Iteraçõs necessárias
 iteracoes= log10(A-B);
 iteracoes-= log10(erro);
 iteracoes/= log(2);
 printf("Caro %d" nome, "serão necessárias %f iterações\n :" (iteracoes));
 // Um dos extremos do intervalo é a raiz
 if(f(A) == 0 || f(B) == 0) {
 printf("O valor %f é zero da expressão. \n", f(A)==0?A:B);
 }
 // Implementação do método da bisecção
 while(intervalo > erro) {
 intervalo = B-A;
 ponto_medio = (A+B)/2;
 if(f(ponto_medio == 0) {
 printf("O resultado encontrado é: x = %f", ponto_medio);
 return 0;
 }
 if(f(a)*f(ponto_medio) < 0) B = ponto_medio; // a solução está a esquerda
 else A = ponto_medio; // a solução está a direita
 }
 printf("Aiai, finalmente chegamos ao intervalo final de: [%f,%f]\n Com solução
aproximada de: %f",A,B,(A+B)/2);
 return 0;
}

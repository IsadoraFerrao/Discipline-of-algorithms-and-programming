#include <stdio.h>
#include <math.h>
#define log10(x) log(x)/log(10);
float f(float x) {
 return pow(x,3)-3; // Fun��o cuja raiz deve ser determinada
}
int main() {
 float A, B, erro, intervalo, ponto_medio, iteracoes; // A e B : pontos | Intervalo: tamanho|
iteracoes: n�mero de itera��es
 int teorema = 0; // Teorema do excelentiss�mo sr. Bolzano
 int nome; //IHC...

 printf("Caro usu�rio, digite seu nome por gentileza :D: \n");
 scanf("%d",&nome);

 printf("Sr. %d" nome, "digite o erro: \n");
 scanf("%f",&erro);
 printf("Sr. %d", nome, "digite o intervalo, por exemplo (ex. [3 : 5]): \n");
 scanf("%f %f", &A, &B);
 teorema=(f(A)*f(B)>0); //Ap�s testar ocorre uma troca de sinal no intervalo, existindo
assim uma ra�z.
 while(teorema == 0) {
 printf("\n Querido, seu intervalo [%f : %f] n�o condiz com o Teorema. Mas voc� tem uma
nova chance, tente novamente \n : ",A,B);
 scanf("%f %f", &A, &B);
 teorema= (f(A)*f(B) > 0);
 }
 // Itera��s necess�rias
 iteracoes= log10(A-B);
 iteracoes-= log10(erro);
 iteracoes/= log(2);
 printf("Caro %d" nome, "ser�o necess�rias %f itera��es\n :" (iteracoes));
 // Um dos extremos do intervalo � a raiz
 if(f(A) == 0 || f(B) == 0) {
 printf("O valor %f � zero da express�o. \n", f(A)==0?A:B);
 }
 // Implementa��o do m�todo da bisec��o
 while(intervalo > erro) {
 intervalo = B-A;
 ponto_medio = (A+B)/2;
 if(f(ponto_medio == 0) {
 printf("O resultado encontrado �: x = %f", ponto_medio);
 return 0;
 }
 if(f(a)*f(ponto_medio) < 0) B = ponto_medio; // a solu��o est� a esquerda
 else A = ponto_medio; // a solu��o est� a direita
 }
 printf("Aiai, finalmente chegamos ao intervalo final de: [%f,%f]\n Com solu��o
aproximada de: %f",A,B,(A+B)/2);
 return 0;
}

#include <stdio.h>
#include <stdlib.h>  //Para gerar um número aleatório (randômico) em linguagem C 
#include <conio.h> 
#include <windows.h>

coracao() {
printf("________00000000000___________000000000000_________\n");
printf("______00000000_____00000___000000_____0000000______\n");
printf("____0000000_____________000______________00000_____\n");
printf("___0000000_______________0_________________0000____\n");
printf("__000000____________________________________0000___\n");
printf("__00000_____________________________________ 0000__\n");
printf("_00000______________________________________00000__\n");
printf("_00000_____________________________________000000__\n");
printf("__000000_________________________________0000000___\n");
printf("___0000000______________________________0000000____\n");
printf("_____000000____________________________000000______\n");
printf("_______000000________________________000000________\n");
printf("__________00000_____________________0000___________\n");
printf("_____________0000_________________0000_____________\n");
printf("_______________0000_____________000________________\n");
printf("_________________000_________000___________________\n");
printf("_________________ __000_____00_____________________\n");
printf("______________________00__00_______________________\n");
printf("________________________00_________________________\n");

}


int main() {
	char namorado, perguntas, segundo, desenho, animal;
 
 printf("\n\nOLA... SEJA BEM VINDO AO ALGORITMOS 3 MESES DE NAMORO \n\n\n Aguarde as indicacoes ! \n\n\n");
 Sleep(5000);
 system("cls");
 
 printf("\n\nOla senhor, vc iniciou um namoro a 3 meses atras com Isadora Ferrao ? \n \n\n Caso for Sim (a) ou Nao(b)\n\n\n ");
 scanf("%c", &namorado);
 system("cls");

 if(namorado == 'A' || namorado=='a'){
 printf("\n\nAguarde... estamos colhendo seus dados... \n\n");
 Sleep(3000);
 printf(".................");
 Sleep(2000);
 printf("...........ZZZzzz...");
 Sleep(2000);
 printf("................");
 Sleep(2000);
 printf("\n\nPIPIPI... dados encontrados");
 Sleep(3000);
 printf("\n\n Nome: Sherlon Almeida\n Profissao: Estudante\n Status: namorando \n Comida preferida: Massa \n Bebida preferida: Suco \n Melhor qualidade: Inteligente\n Pior defeito: Ser tao lindo\n Banda preferida: Scorpions\n Anime preferido: Cavaleiros do zodiaco\n Atividades preferidas: ler, estudar e tocar. \n");
 Sleep(15110);
 system("cls");
 
 
  
  
  
 
 printf("\n\nQUIS... 3 meses de namoro\n Para ganhar um mimo vc precisa \n conhecer sua namorada. \n Deseja jogar? Sim(a) ou Nao(b)\n\n");
 scanf("%c", &perguntas);
 
 system("cls");
 
 printf("\n\nQual o animal preferido da sua namorada? \n A-Pinguim \n B-Panda \n C-Girafa \n");
 scanf("%c", &animal);
 	if(animal=='a' || animal=='A')
 	printf("\n\nOs pinguins ainda dominarao o mundo... meu amor :3 \n\n");
 	else
 	if(animal=='B' || animal=='b')
 	printf("\nTa ratiando, ne!");
 	else
 	if(animal=='C' || animal=='c')
 	printf("Odeio girafas... :/ \n");
 	
 	Sleep(5000);
 	system("cls");
 	
 	
 	
 	
	printf("\n\n\nQual o desenho preferido da sua namorada?\n A-Barbie\n B-Minions\n C-Bob Esponja \n\n");
	scanf("%c", &desenho);
	
	if(desenho=='a' || desenho=='A'){
	
 	printf("\n\nTalvez uns 12 anos atras... \n\n");
 									}
 	else
	 
 	if(desenho=='B' || desenho=='b') {
	 
	 
 	printf("\nBANANAAAA....");
		 }
		 
		 
 	else
	 
 	if(desenho=='C' || desenho=='c') {
	 
	 
 	printf("Passou raspando... :/ \n");
		}
 	
 	Sleep(5000);
 	system("cls");
 	
 	printf("\n\nSua namorada tem uma fama por tirar qual lugar? \n A-Primeiro Lugar\n B-Segundo Lugar\n C-Terceiro lugar\n");
 	scanf("%c", &segundo);
 	
 	if(segundo=='a' || segundo=='A'){
	 
 	printf("\n:/ infelizmente vc errou...\n");
 								}
	
	else{
		if(segundo=='b' || segundo=='B')
		printf("\nHAHA... resposta correta \n");
	}
	

 	
 	Sleep(5000);
 	system("cls");
 	
 	printf("COMPUTANDO SUAS RESPOSTAS DO QUIS...");
 	Sleep(3000);
 	printf("\nhum... aham....\n\n");
 	Sleep(3000);
 	system("cls");

 printf(" \n\n  Amor verdadeiro e algo esporadico e valioso,\n  e muito dificultoso de ser encontrado, \n  mas quando ele aparece, a gente reconhece\n  de cara ou de algoritmos :P hehe... \n  Em meio a tantos futuros cientistas...\n  em meio a tantas variaveis.... nos encontramos, \n  tu foste uma constante na minha vida \n  amor... feliz 3 MESINHOS :3 ... \n  Da uma olhada na parte superior da tua geladeira :3 HEHE... \n     \n\n              ...TE AMO MEU AMOR... \n \n\n\n ");
	coracao();
	
}
 
 
 
 
 



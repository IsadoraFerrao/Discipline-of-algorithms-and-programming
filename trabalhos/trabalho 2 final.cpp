#include <stdio.h> 
#define LN 8
#define CC 8
# include <stdlib.h>
#include <conio.h> 


int main(){
	char campo[LN][CC], direcao;     //Varivais do "campo" = espaço / L = Linha e C = Coluna / Direcao = direção para onde vai a colheitadeira
	int L, C, C_B, D_E; 		 // aqui foram definidas as variáveis L e C = linha e coluna e C_B = cima e baixo e D_E = direita e esquerda
		for (L=0; L<LN; L++)  				//CONTADOR DE LINHAS
			for(C=0; C<CC; C++)				//CONTADOR DE COLUNAS
			
			
				
				campo[L][C] = 'xxx'; 			//foi definido a linha e coluna como a grama representada graficamente por aquilo ali  
				
				
						printf("OPA SOH!  Informe onde está sua colheitadeira: ");
						scanf("%d %d", &C_B, &D_E);
						system ("color 2F");
							campo[C_B][D_E] = 'C';
							printf("Você pode movimentas a colheideira:\n");
							printf("1 | BRUM BRUM... para cima\n");
							printf("2 | BRUM BRUM... para baixo\n");
							printf("3 | BRUM BRUM... para esquerda\n");
							printf("4 | BRUM BRUM... para a direita\n");
							
							
							
							do {								// Aqui ele mostra o campo "tela" com as gramas e a colheitadeira 
								for (L=0; L<LN; L++) {
								for (C=0; C<CC; C++)
									printf("%c", campo[L][C]);
									printf("\n");
								}		
				
					printf("Movimentando... BRUM BRUM...: ");					// Pedindo ao usuário para movimentar a colheitadeira
					scanf("%c", &direcao);
						while(getchar() != '\n'); /* Limpa buffer de entrada */
						switch (direcao) {
							
						case '1':											//Caso for para cima		
							if (C_B > 0) {
						campo[C_B][D_E] = '.';
						campo[--C_B][D_E] = 'C';					// Caso for maior que zero ele vai para a esquerda ou direita
					}
					else
					
						printf("BI...BI... CUIDADO A CERCA\n");
					break;										// Encerra sessão
					
					///////////////////////////////////////////////////////////////////////////////
					//////////////////////////////////////////////////////////////////////////////
					
					case '2':
					if (C_B < LN-1) {
						campo[C_B][D_E] = '.';
						campo[++C_B][D_E] = 'C';
					}
					else
						printf("BI..BI... CUIDADO COM A CERCA\n");
					break;
					
					//////////////////////////////////////////////////////////////////////////////
					/////////////////////////////////////////////////////////////////////////////
					
					
					case '3':
					if (D_E > 0) {
						campo[C_B][D_E] = '.';
						campo[C_B][--D_E] = 'C';
					}
					
					else
					printf("BI..BI... CUIDADO A CERCA\n");
					break;
					
				   	//////////////////////////////////////////////////////////////////////////////
					/////////////////////////////////////////////////////////////////////////////
					
					case '4':
					if (D_E < CC-1) {
						campo[D_E][C_B] = '.';
						campo[D_E][++C_B] = 'C';
					}
					
					else
							printf("BI..BI.. OLHA A CERCA, DIACHOS! \n");
					break;
					
							default:
							printf("Ué, cê ta louco?\n");
				}
				
				
			} while (D_E >= 0 && D_E < LN && C_B >= 0 && C_B < CC);
			
		return 0;
	}

#include <stdio.h>
#include <windows.h>

livro(){
printf("\n\n\n");	                                                          
printf("                                 77888880\n");                             
printf("                              7888847   87\n");                            
printf("                          70888477       777\n");                          
printf("                      7588847             2888\n");                        
printf("                  72888877            70880228\n");                        
printf("               7088827            7488852777788\n");                       
printf("           7188857            75888427777777728\n");                       
printf("        788807            7288842777777777777785\n");                      
printf("     488827           72088477777777777777777758              5892\n");    
printf("    887           7288852777777777777777777777781         7  807728\n");   
printf("    81       774084577777777777777777777777777748        88442777747\n");  
printf("    5877779409427777777777777777777777777777777787      287577777727\n");  
printf("    7872228577777777777777777777777777777777777748      487777777757\n");  
printf("     8277778777777777777777777777777777777777777787     78777777778\n");   
printf("     2877774477777777777777777777777777777777777708      9877777782\n");   
printf("      8777778277777777777777777777777777777777777787      78572588\n");    
printf("      5877772877777777777777777777777777777777777708      7778557\n");     
printf("       8277779577777777777777777777777777772827777787    78 25\n");        
printf("       2877777877777777777777777777777777778808577798   20 78\n");         
printf("        8277775077777777777777777777777777718807777787757 78\n");          
printf("        7877777827777777777777777777777777777777777748  741\n");           
printf("         857777787777777708572777777777777777777777779777\n");             
printf("          877777597777777888847777777777777777777777758\n");               
printf("          2877777827777777227777777777772117777777777787\n");              
printf("           827777287777777777777777725277 22777777777728\n");              
printf("           787777704777777777777775477     47777777777789\n");             
printf("            507777787777777777777707       17777777777728\n");             
printf("             827777287777777777777727      717777777777708\n");            
printf("             7850702457777777777777747     7277777777777787\n");           
printf("              08  577877777777777777711    7777777777777728\n");           
printf("              8  877740777777777777777727 777777777777777788\n");          
printf("             87 857777827777777777777777777777777777777777782\n");         
printf("             8  8477777877777777777777777777777777777777777887\n");        
printf("            7872804277740777777777777777777777777777772488847\n");         
printf("            287777751777827777777777777777777777772088847\n");             
printf("            8777777 077728777777777777777777775888817\n");                 
printf("           78777777 42777847777777777777714888027\n");                     
printf("            82777772817777877777777724888857\n");                          
printf("             880908478477728777598888477\n");                              
printf("               777    4888888888477\n");                                   
printf("                        7777\n");                                         
                                                                      
                                                                      
}

// programa para calcular a mediana entre 5 numeros 

int main(){	// quantos numeros o usuario vai poder digitar
	int vetor[5], medi_ana, troca_ana_1, troca_ana_2, pux; // variaveis
	printf("\n\n\n Este programa gera o metodo bolha de 5 numeros ! \n\n Caso queira continuar aguarde alguns segundos\n\n");
	

	
	for(pux=0; pux<5; pux++)			// para vetor 1=0, menos que 5 ou vetor 1 ++ faça = pedir para digitar mais numeros
	
																								{
											
    	printf("\n\n    Digite 1 numero: ");  // usuario vai digitar
    	scanf("%d", vetor[pux]);								// puxando os numeros digitados	
						
   	 
																								}

	for(troca_ana_1=0; troca_ana_1<5; troca_ana_1++)				// para troca 1=0, menor que 5 faça ... para for
																	// vetor 2=0, menor que 5, vetor++ ... SE vetor 1 
																	// for menor que o vetor 2. 
																						{
																							
   		 for(troca_ana_2=0; troca_ana_2<5; troca_ana_2++)
    																			{
			 if(vetor[troca_ana_1]<vetor[troca_ana_2])
			 {
			 				medi_ana=vetor[troca_ana_1];					// trocas ... 
			 				vetor[troca_ana_1]=vetor[troca_ana_2];
			 				vetor[troca_ana_2]=medi_ana;
             }
         }
     }
  																				
		printf("\n\n\n    A ordem segundo o metodo bolha e:\n");			// resultado da mediana
		livro();
																						
		for(pux=0; pux<5; pux++){
			printf("%d",vetor[pux]);
		}
			
	
}

	
	
	

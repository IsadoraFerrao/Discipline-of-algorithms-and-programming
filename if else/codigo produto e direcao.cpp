#include <stdio.h>
# include <stdlib.h> 
# include <conio.h> 
int main() {
 float preco;
 int cod;
 system ("color 2k");  
 printf("Digite o preco e o codigo do produto: ");
 scanf("%f %d", &preco, &cod);
 if(cod == 1)
 printf("preco = %f, produto do Norte\n", preco);
 else if(cod == 2 || cod == 3)
 printf("preco = %f, produto do Nordeste\n", preco);
 else if(cod == 4 || cod >= 10 && cod <= 20)
 printf("preco = %f, produto do Sul\n", preco);
 else if((cod == 5) || (cod >= 25 && cod <= 30))
 printf("preco = %f, produto do Sudeste\n", preco);
 else if(cod >= 6 && cod <= 9)
 printf("preco = %f, produto do Centro-Oeste\n", preco);
 else
 printf("preco = %f, produto importado\n", preco);
}

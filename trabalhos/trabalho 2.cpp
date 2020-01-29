#include <stdio.h> 
#define C 5 
#define Y 8 
int main() { 
char tela[C][Y], mov; 
int i, j, k, l; 
for (i=0; i<C; i++) 
for (j=0; j<Y; j++) 
tela[i][j] = 'x'; 
printf("Ola fazendeiro, informe a coordenada que trator vai iniciar! \n ...e bora cortar pasto, OPA SOH!: \n "); 
scanf("%d %d", &k, &l); 
tela[k][l] = 'C'; 
printf("Fazendeiro, vc pode movimentar seu trator pelas teclas:\n"); 
printf("\t1 brum... brum... para cima\n"); 
printf("\t2 brum... brum... para baixo\n"); 
printf("\t3 brum... brum... para a esquerda\n"); 
printf("\t4 brum... brum.. para a direita\n"); 
do { 
for (i=0; i<C; i++) { 
for (j=0; j<Y; j++) 
printf("%c", tela[i][j]); 
printf("\n"); 
} 
printf("Movimento: "); 
scanf("%c", &mov); 
while(getchar() != '\n'); 
switch (mov) { 
case '1': 
case '1': 
if (k > 0) { 
tela[k][l] = '.'; 
tela[--k][l] = 'C'; 
} 
else 
printf("OPA, OLHA A CERCA\n"); 
break; 
case '2': 
case '2': 
if (k < C-1) { 
tela[k][l] = '.'; 
tela[++k][l] = 'C'; 
} 
else 
printf("OPA, OLHA A CERCA\n"); 
break; 
case '3': 
case '3': 
if (l > 0) { 
tela[k][l] = '.'; 
tela[k][--l] = 'C'; 
} 
else 
printf("OPA, OLHA A CERCA\n"); 
break; 
case '4': 
case '4': 
if (l < Y-1) { 
tela[k][l] = '.'; 
tela[k][++l] = 'C'; 
} 
else 
printf("OPA, OLHA A CERCA\n"); 
break; 
default: 
printf("Movimento inválido\n"); 
} 
} while (k >= 0 && k < C && l >= 0 && l < Y); 
return 0; 
} 

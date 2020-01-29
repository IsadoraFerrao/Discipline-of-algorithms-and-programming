#include <stdio.h>
int main() {
 int i, INI, FIM, INC;
 printf("Digite INI, FIM e INC: ");
 scanf("%d %d %d", &INI, &FIM, &INC);
 for(i = INI; i <= FIM; i = i + INC){
 printf("%d\n", i);
 }
}


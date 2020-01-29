#include <stdio.h>
int main() {
 int i, INI, FIM, INC;
 printf("Digite INI, FIM e INC: ");
 scanf("%d %d %d", &INI, &FIM, &INC);
 i = INI;
 while(i <= FIM){
 printf("%d\n", i);
 i = i + INC;
 }
}

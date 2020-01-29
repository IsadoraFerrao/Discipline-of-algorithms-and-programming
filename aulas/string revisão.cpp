#include <stdio.h>
#include <string.h>
int main() {
 char txt[100];
 int i, cont = 0;
 printf("Digite uma string: ");
 gets(txt);
 for(i = 0; i < strlen(txt); i++) {
 if(txt[i] >= 'A' && txt[i] <= 'Z')
 cont++;
 }
 printf("A string possui %d chars maiusculos\n", cont);
}

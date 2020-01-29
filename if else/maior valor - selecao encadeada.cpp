#include <stdio.h>
int main() {
	
	
 float a,b,c;
 printf("Digite os valores de a, b e c: ");
 scanf("%f %f %f", &a, &b, &c);
 if(a > b) {
 if(a > c)
 printf("O maior valor eh %f\n", a);
 else
 printf("O maior valor eh %f\n", c);
 } else {
 if(b > c)
 printf("O maior valor eh %f\n", b);
 else
 printf("O maior valor eh %f\n", c);
 }
}

#include <stdio.h>
#include <math.h>
float f(float x)        {
    return pow(x,3)-3;
                        }
    int main(){

        int a, b, cont, nome; //valores do intervalo //contador de interações //Nome por IHC
        float V_intervalo, erro; //valor do intervalo e erros
        float Func_A, Func_B, Func_X; //Armazenam as funções quando forem aplicados os valores de A, B e X.

            printf("Seja bem vindo, digite seu nome");
            scanf("%d", &nome);
            printf("Sr. %d", nome, digite o A do intervalo, por exemplo [5 : 4] = );
            scanf("%d", &a);
            printf("Sr. %d", nome, digite o B do intervalo, por exemplo [5 : 4] = ");
            scanf("%d", &b);
            printf("Sr. %d", nome digite o valor de erro do intervalo= ");
            scanf("%f", &erro);

            //Utilizando a função de terceiro grau, sendo ela = X^3-9x+3

            do {
                V_intervalo=(a+b)/2;
                Func_A=(a*a*a)-(9*a)+3;
                Func_X=(V_intervalo*V_intervalo*V_intervalo)-(9*V_intervalo)+3;

                 if { ( Func_A*Func_B < 0 )
                    Func_B=V_intervalo;
                    }

                 else {
                    Func_A=V_intervalo;
                 Cont++;
                      }

            printf("Resposta = %d", cont);
            printf("Função A = %")



            }



            if(f(a)*f(b)<0) { //Iniciando o tal do teorema do tio Bolzano

                printf("OMG... EXISTE UMA RAIZ :D");
                            }
            else{

                printf("Não existe nenhuma raíz, até a próxima usuário ! :D");
                }
                }

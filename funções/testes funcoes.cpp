#include <conio.h>
#include <dos.h>
#include <stdio.h>


void EsperaEnter()  // Definição da função "EsperaEnter"
{
    int tecla;
    printf("Pressione ENTER\n");
    do
    {
        tecla = getch();
        if (tecla !=13) // Se nao for ENTER
        {
            sound(700); // Ativa a emissão de um BEEP
            delay(10);  // Mantém a emissão do som por 10 ms
            nosound();  // Para de emitir o som 
        }
    } while(tecla != 13); // 13 e' o codigo ASCII do ENTER
}

void main()   
{
    EsperaEnter();      // Chamada da função definida antes
    // ...........
    EsperaEnter();      // Chamada da função definida antes
    // ...........
    EsperaEnter();      // Chamada da função definida antes  
}

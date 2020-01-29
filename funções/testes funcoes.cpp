#include <conio.h>
#include <dos.h>
#include <stdio.h>


void EsperaEnter()  // Defini��o da fun��o "EsperaEnter"
{
    int tecla;
    printf("Pressione ENTER\n");
    do
    {
        tecla = getch();
        if (tecla !=13) // Se nao for ENTER
        {
            sound(700); // Ativa a emiss�o de um BEEP
            delay(10);  // Mant�m a emiss�o do som por 10 ms
            nosound();  // Para de emitir o som 
        }
    } while(tecla != 13); // 13 e' o codigo ASCII do ENTER
}

void main()   
{
    EsperaEnter();      // Chamada da fun��o definida antes
    // ...........
    EsperaEnter();      // Chamada da fun��o definida antes
    // ...........
    EsperaEnter();      // Chamada da fun��o definida antes  
}

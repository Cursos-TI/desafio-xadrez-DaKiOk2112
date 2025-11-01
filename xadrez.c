#include <stdio.h>

        //PROGRAMA NÍVEL AVENTUREIRO

/*
int main() {

        //DECLARAÇÃO DAS VARIÁVEIS
int movimento_bispo = 1,
    movimento_torre = 1,
    movimento_rainha = 1,
    movimento_esquerda = 1;

    //MOVIMENTO DO BISPO

printf("Movimento do Bispo:\n");
while (movimento_bispo <= 5){
    printf("Direita\n");
    printf("Cima\n");
    movimento_bispo++;
}
printf("\n");


    //MOVIMENTO DA TORRE

printf("Movimento da Torre:\n");
do{
    printf("Direita\n");
    movimento_torre++;
} while (movimento_torre <= 5);
printf("\n");

    //MOVIMENTO DA RAINHA

printf("Movimento da Rainha:\n");
for (movimento_rainha; movimento_rainha <= 8; movimento_rainha++){
    printf("Esquerda\n");
}
printf("\n");


    //MOVIMENTO DO CAVALO

printf("Movimento do cavalo:\n");
do
{
    for (int movimento_baixo = 1; movimento_baixo <= 2; movimento_baixo++)
    {
        printf("Baixo\n");
    }
printf("Esquerda\n");
movimento_esquerda++;
} while (movimento_esquerda <= 1);
printf("\n");

return 0;
}
*/


        // PROGRAMA NÍVEL MESTRE

void bispo(int casas)
{
    if (casas > 0)
    {
        printf("DIREITA\n");
        bispo(casas - 1);
        printf("CIMA\n");
    }
}

void torre (int casas)
{
    if (casas > 0)
    {
        printf("DIREITA\n");
        torre(casas - 1);
    }

}

void rainha (int casas)
{
    if (casas > 0)
    {
        printf("ESQUERDA\n");
        rainha(casas - 1);
    }

}

void cavalo (casas)
{
    if (casas > 0)
    {
        for (int n = 2; n > 0; printf("CIMA\n"), n--);
        printf("DIREITA\n");
        cavalo(casas - 1);
    }
}

int main()
{
    int movimento_bispo = 5,
        movimento_torre = 5,
        movimento_rainha = 8,
        movimento_cavalo = 1;

    printf("MOVIMENTO DO BISPO\n");
    bispo(movimento_bispo);
    printf("\n");

    printf("MOVIMENTO DA TORRE\n");
    torre(movimento_torre);
    printf("\n");

    printf("MOVIMENTO DA RAINHA\n");
    rainha(movimento_rainha);
    printf("\n");

    printf("MOVIMENTO DO CAVALO\n");
    cavalo(movimento_cavalo);
    printf("\n");
    
return 0;
}
#include <stdio.h>

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

#include <stdio.h>


   // recursivo movimentação da torre "mover torre"
void moverTorre(int casas) {
    if (casas > 0){
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
// recursivo movimentação da rainha "mover rainha "
void moverRainha(int casas){
    if (casas > 0){
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main(){
    int opcao;
    do
    {

// menu do jogo:
printf("***Jogo de xadrez!\n");
printf("###Menu###\n");
printf("1. Movimentar Bispo\n");
printf("2. Movimentar Torre\n");
printf("3. Movimentar Rainha\n");
printf("4. Movimentar Cavalo\n");
printf("5. Sair\n");
printf("Qual peça você quer movimentar: \n");
scanf("%d", &opcao);
printf("\n");


switch (opcao){

case 1:
// movimento do bispo
printf("Movimentação do bispo: \n");
for (int i = 0; i < 5; i++)
{
        for (int j = 1; j >= 1; j--)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
}

break;

// movimento da torre 
case 2:


printf("Movimentação da torre: \n");
moverTorre(5);
printf("\n");
break;

case 3:
// movimento da rainha
printf("Movimentação da Raiha\n");
moverRainha(8);
printf("\n");
break;

// movimento do cavalo
case 4:
printf("Movimentação do cavalo\n");
for (int i = 0, j = 0; i < 2 || j < 1; (i < 2) ? i++ : j++) {
    if (i < 2) {
        printf("Cima\n");
    } else {
        printf("Direita\n");
    }
}
break;

default:
break;
}

} while (opcao < 5);
printf("Saindo...\n");
return 0;
}
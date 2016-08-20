#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define WINDOWS 1
#define LINUX 2

//Este projeto tem como intuito colocar 9 números em uma linha e rotaciona-los em um dos sentidos (direita ou esquerda)
int main(){
    setlocale(LC_ALL, "Portuguese");                                                                        //Define o idioma como português
    int VariavelRotacionada[10], ArmazenaVariavel, posicao, incrementa, tempo, sistema;                     //define as variaveis tipo inteiro
    printf("Digite o número correspondente ao seu sistema operacional \n Windows [1]\n Linux   [2]\n");     //Solicita ao usuário que indique seu sistema operacional
    scanf("%d", &sistema);                                                                                  //Guarda o que o usuário digitou na posição de memória "sistema"

    posicao=0;                                                                                              //Coloca valor zero na variavel posicao
    while(posicao<10){                                                                                      //Define que enquanto posicao for menor que 10 fara a função abaixo
        if (sistema==WINDOWS){                                                                              //Verifica se o sistema operacional é Windows
            system("cls");                                                                                  //Comando para limpar tela (Windows)
        }
        else if (sistema==LINUX){                                                                           //Verifica se o sistema operacional e Linux
            printf("\e[H\e[2J");                                                                            //Comando para limpar tela (Linux)
        }
        printf("Digite  um número entre 0 e 20: \n");                                                       //Solioita ao usuario que digite umn número entre 0 e 20
        scanf("%d", &VariavelRotacionada[posicao]);                                                         //Guarda o que usuário digitar em determinada posição do array
        posicao++;                                                                                          //Incrementa 1 na variavel "posicao"
    }
    while(1){                                                                                               //Inicia função por tempo indeterminado
//PARTE DO PROGRAMA RESPONSAVEL POR LER OS NÚMEROS DIGITADOS E ARMAZENALOS EM UM ARRAY
        if (sistema==WINDOWS){                                                                              //Verifica se o sistema operacional é Windows
            system("cls");                                                                                  //Comando para limpar tela (Windows)
        }
        else if (sistema==LINUX){                                                                           //Verifica se o sistema operacional e Linux
            printf("\e[H\e[2J");                                                                            //Comando para limpar tela (Linux)
        }
        posicao=0;                                                                                          //Coloca valor zero na variavel posicao
        while(posicao<10){                                                                                  //Define que enquanto posicao for menor que 10 fara a função abaixo
            printf("%d", VariavelRotacionada[posicao] );                                                    //Imprime na tela o valor de determinada posição da variavel "VariavelRotacionada"
            posicao++;                                                                                      //Incrementa 1 na variavel "posicao"
        }
//PARTE DO PROGRAMA RESPONSAVEL POR ROTACIONAR
        posicao=0;                                                                                          //Coloca valor zero na variavel posicao
        incrementa=1;                                                                                       //Coloca valor um na variavel incrementa
        ArmazenaVariavel=VariavelRotacionada[0];                                                            //Guarda o valor da posição 0 da variavel "VariavelRotacionada", na variavel "ArmazenaVariavel"
        while(posicao<9){                                                                                   //Define que enquanto posicao for menor que 9 fara a função abaixo
                VariavelRotacionada[posicao]= VariavelRotacionada[incrementa];                              //Começa a rotacioar as variaveis
                posicao++;                                                                                  //Incrementa 1 na variavel "posicao"
                incrementa++;                                                                               //Incrementa 1 na variavel "incrementa"
        }
        VariavelRotacionada[9]=ArmazenaVariavel;                                                            //Coloca o valor da variavel "ArmazenaVariavel" na posição 9 da variavel "VariavelRotacionada"
        for (tempo=0; tempo<100000000; tempo++);                                                            //Tempo de delay
            }
    return 0;
}

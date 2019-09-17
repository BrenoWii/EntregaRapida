#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>
#include "Fila.cpp"
#include "CalculadorDeDistancia.cpp"


/**

* Nome:Breno William de Abreu Oliveira,
� Objetivo do programa: Calcular a distancia de cidades.
� Como deve ser feita a entrada de dados: Primeiro o sistema ir� pedir a quantidade de cidades, depois o nome de cada uma, logo em seguida ir� pedir para entrar com a matriz de conectividade,
o sistema ir� perguntar para cada uma das cidades se elas est�o conectadas, respondendo 1 para sim 0 para n�o.

� Resultado da execu��o do programa: No final da execu��o do programa ir� imprimmir a distancia de cada cidade



**/


int main()
{

    CalculadorDeDistancia *Doido = new CalculadorDeDistancia();

    /*
     L� quantas cidades
    */
    Doido->obtemCidades();
    /*
     L� o nome das cidades
    */
    Doido->obtemNomeDasCidades();
     /*
      Obtem a matriz de conectividade das cidades
    */
    Doido->obtemMatrizDeConectividade();

    system("cls");

    //Imprime a distancia das cidades, se o numero for o mesmo da quantidade de cidades, a cidade e inalcan��vel

    Doido->imprimirDistancias();




    return 0;
}

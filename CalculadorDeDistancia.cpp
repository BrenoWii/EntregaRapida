#include <iostream>
#include <stdlib.h>

#include "CalculadorDeDistancia.h"
#include "Fila.h"

using namespace std;

void CalculadorDeDistancia::obtemCidades()
{
     int quantidadeCidades;
    cout << "Quantas Cidades?" << endl;
    cin >> quantidadeCidades;

    this->quantidadeDeCidades = quantidadeCidades;

}
void CalculadorDeDistancia::obtemNomeDasCidades()
{
    for (int i = 0; i< this->quantidadeDeCidades; i++)
    {
        string nome ;
        cout << "Qual  e o nome da  "<< i +1 <<" cidade" << endl;
        cin >> nome ;
        this->cidades.push_back(nome);
    }
}

void CalculadorDeDistancia::obtemMatrizDeConectividade()
{
    this->matrizConectividade.resize(this->quantidadeDeCidades);
    for (sub_array : this->matrizConectividade) {
    sub_array.resize(this->quantidadeDeCidades);
    }

    for (int i = 0; i< this->quantidadeDeCidades; i++)
    {
        for (int x = 0; x<this->quantidadeDeCidades; x++)
        {
            cout << "A cidade "<< this->cidades[i] <<" esta ligada a cidade  " << this->cidades[x] << "(1 para sim 0 para nao)" <<endl;
            cin >> this->matrizConectividade[i][x];

        }
    }
}

void CalculadorDeDistancia::imprimirDistancias()
{

     for (int j = 0; j< this->quantidadeDeCidades; j++ )
    {
        cout  << this->cidades[j] << " :"<< endl;
        int *distancia = this->cidadesAtivas(this->matrizConectividade,j,this->quantidadeDeCidades);
        for(int i = 0; i< this->quantidadeDeCidades; i++)
        {
            cout << "  " << this->cidades[i] << ": ";
            cout  << " " << distancia[i] ;
        }
        cout << endl;

    }
}



int * CalculadorDeDistancia::cidadesAtivas (std::vector<std::vector<int> > matrizConectividade,int numeroCidade,int numeroTotalCidades)
{
    Fila *F = new Fila();
    int x;

    int *distancia = (int*)malloc(sizeof(int)*numeroTotalCidades);

    for (int i =0; i<numeroTotalCidades; i++ )
    {
        distancia[i] = (int)malloc(sizeof(int)*numeroTotalCidades);
        distancia[i] = numeroTotalCidades;
    }

    distancia[numeroCidade] = 0;

    F->Enfileirar(numeroCidade);

    while(!F->Vazia())
    {
        F->Desenfileirar(x);

        for (int j = 0; j< numeroTotalCidades; j++)
        {
            if(matrizConectividade[x][j] && distancia[j] == numeroTotalCidades)
            {
                distancia[j] = distancia[x]+1;
                F->Enfileirar(j);

            }
        }

    }


    return distancia;
}


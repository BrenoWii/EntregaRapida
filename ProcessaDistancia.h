#ifndef CALCULADORDEDISTANCIA_H_INCLUDED
#define CALCULADORDEDISTANCIA_H_INCLUDED


class CalculadorDeDistancia
{

private:
    int quantidadeDeCidades;
    std::vector<std::string> cidades;
    int **matrizConectividade;

public:

    int *cidadesAtivas (int **matrizConectividade,int numeroCidade,int numeroTotalCidades);
    void obtemCidades();
    void obtemNome();
    void obtemMatrizDeConectividade();
};

#endif // PROCESSADISTANCIA_H_INCLUDED

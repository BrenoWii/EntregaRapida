#ifndef CALCULADORDEDISTANCIA_H_INCLUDED
#define CALCULADORDEDISTANCIA_H_INCLUDED


#include <vector>

class CalculadorDeDistancia
{

      private:
          int quantidadeDeCidades;
          std::vector<std::string> cidades;
          std::vector<std::vector<int> > matrizConectividade;


      public:
          void setQuantidadeDeCidades(int numero);
          int *cidadesAtivas (std::vector<std::vector<int> > matrizConectividade,int numeroCidade,int numeroTotalCidades);
          void obtemCidades();
          void obtemNomeDasCidades();
          void obtemMatrizDeConectividade();
          void imprimirDistancias();
};



#endif // CALCULADORDEDISTANCIA_H_INCLUDED

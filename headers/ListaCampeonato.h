#include <string>
#include <vector>
#include "Campeonato.h"

using namespace std;

class ListaCampeonato
{
private:
  vector<Campeonato> campeonatos;

public:
  ListaCampeonato() : campeonatos() {}
  ~ListaCampeonato() {}

  // Funções para adicionar, remover e listar campeonatos
  void adicionarCampeonato(const Campeonato &campeonato)
  {
    campeonatos.push_back(campeonato);
  }

  void removerCampeonato(const string &Nome)
  {
    for (auto it = campeonatos.begin(); it != campeonatos.end(); ++it)
    {
      if (it->getNome() == Nome)
      {
        campeonatos.erase(it);
        break;
      }
    }
  }

  void listarCampeonatos() const
  {
    for (auto it = campeonatos.begin(); it != campeonatos.end(); ++it)
    {
      cout << it->getJogo() << "  :  " << it->getNome() << endl;
    }
  }
};

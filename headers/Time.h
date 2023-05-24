#include <iostream>
#include <vector>
#include <iostream>
#include "Jogador.h"
using namespace std;

class Time
{
private:
  string NomeOrg;
  string Jogo;
  string Region;
  vector<Jogador> Jogadores;

public:
  Time() {}
  Time(const string &nomeOrg, const string &jogo, const string &region)
      : NomeOrg(nomeOrg), Jogo(jogo), Region(region), Jogadores() {}
  ~Time() {}

  // Getters
  string getNomeOrg() const
  {
    return NomeOrg;
  }

  string getJogo() const
  {
    return Jogo;
  }

  string getRegion() const
  {
    return Region;
  }

  vector<Jogador> &getJogadores()
  {
    return Jogadores;
  }

  // Setters
  void setNomeOrg(const string &novoNomeOrg)
  {
    NomeOrg = novoNomeOrg;
  }

  void setJogo(const string &novoJogo)
  {
    Jogo = novoJogo;
  }

  void setRegion(const string &novaRegion)
  {
    Region = novaRegion;
  }

  // Funções para adicionar, remover e listar jogadores
  void adicionarJogador(const Jogador &jogador)
  {
    Jogadores.push_back(jogador);
  }

  void removerJogador(const string &CPF)
  {
    for (auto it = Jogadores.begin(); it != Jogadores.end(); ++it)
    {
      if (it->getCPF() == CPF)
      {
        Jogadores.erase(it);
        break;
      }
    }
  }

  void listarJogadores() const
  {
    for (auto it = Jogadores.begin(); it != Jogadores.end(); ++it)
    {
      cout << it->getNome() << "  :  " << it->getCPF() << endl;
    }
  }
};

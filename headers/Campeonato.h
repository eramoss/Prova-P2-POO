#include <string>
#include <vector>
#include "Juiz.h"
#include "Time.h"

using namespace std;

class Campeonato
{
private:
  string Jogo;
  string Nome;
  string TipoCampeonato;
  double precoDeEntrada;
  string Premiacao;
  vector<Juiz> Juizes;
  vector<Time> Times;

public:
  Campeonato(const string &jogo, const string &nome, const string &tipoCampeonato, double precoDeEntrada, const string &premiacao)
      : Jogo(jogo), Nome(nome), TipoCampeonato(tipoCampeonato), precoDeEntrada(precoDeEntrada), Premiacao(premiacao), Juizes(), Times() {}
  ~Campeonato() {}

  // Getters
  string getJogo() const
  {
    return Jogo;
  }

  string getNome() const
  {
    return Nome;
  }

  string getTipoCampeonato() const
  {
    return TipoCampeonato;
  }

  double getPrecoDeEntrada() const
  {
    return precoDeEntrada;
  }

  string getPremiacao() const
  {
    return Premiacao;
  }

  vector<Juiz> &getJuizes()
  {
    return Juizes;
  }

  vector<Time> &getTimes()
  {
    return Times;
  }

  // Setters
  void setJogo(const string &novoJogo)
  {
    Jogo = novoJogo;
  }

  void setNome(const string &novoNome)
  {
    Nome = novoNome;
  }

  void setTipoCampeonato(const string &novoTipoCampeonato)
  {
    TipoCampeonato = novoTipoCampeonato;
  }

  void setPrecoDeEntrada(double novoPrecoDeEntrada)
  {
    precoDeEntrada = novoPrecoDeEntrada;
  }

  void setPremiacao(const string &novaPremiacao)
  {
    Premiacao = novaPremiacao;
  }

  // Funções para adicionar, remover e listar times
  void adicionarTime(const Time &time)
  {
    Times.push_back(time);
  }

  void removerTime(const string &nome)
  {
    for (auto it = Times.begin(); it != Times.end(); ++it)
    {
      if (it->getNomeOrg() == nome)
      {
        Times.erase(it);
        break;
      }
    }
  }

  void listarTimes() const
  {
    for (auto it = Times.begin(); it != Times.end(); ++it)
    {
      cout << it->getJogo() << "  :  " << it->getNomeOrg() << endl;
    }
  }

  // Funções para adicionar, remover e listar juízes
  void adicionarJuiz(const Juiz &juiz)
  {
    Juizes.push_back(juiz);
  }

  void removerJuiz(const string &CPF)
  {
    for (auto it = Juizes.begin(); it != Juizes.end(); ++it)
    {
      if (it->getCPF() == CPF)
      {
        Juizes.erase(it);
        break;
      }
    }
  }

  void listarJuizes() const
  {
    for (auto it = Juizes.begin(); it != Juizes.end(); ++it)
    {
      cout << it->getCPF() << "  :  " << it->getNome() << endl;
    }
  }
};

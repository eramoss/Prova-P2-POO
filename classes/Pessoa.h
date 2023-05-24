#include <string>
using namespace std;

class Pessoa
{
protected:
  string nome;
  string CPF;
  unsigned int idade;
  string telefone;

public:
  Pessoa() {}
  Pessoa(const string &nome, const string &CPF, unsigned int idade, const string &telefone)
      : nome(nome), CPF(CPF), idade(idade), telefone(telefone) {}

  virtual ~Pessoa() {}

  // Getters
  string getNome() const
  {
    return nome;
  }

  string getCPF() const
  {
    return CPF;
  }

  unsigned int getIdade() const
  {
    return idade;
  }

  string getTelefone() const
  {
    return telefone;
  }

  // Setters
  void setNome(const string &novoNome)
  {
    nome = novoNome;
  }

  void setCPF(const string &novoCPF)
  {
    CPF = novoCPF;
  }

  void setIdade(unsigned int novaIdade)
  {
    idade = novaIdade;
  }

  void setTelefone(const string &novoTelefone)
  {
    telefone = novoTelefone;
  }
};

#include <Pessoa.h>

class Jogador : public Pessoa
{

private:
  string NomeOrgLinked;

public:
  Jogador() {}
  Jogador(const string &nome, const string &CPF, unsigned int idade, const string &telefone, const string &nomeOrg) : Pessoa(nome, CPF, idade, telefone), NomeOrgLinked(nomeOrg) {}
  ~Jogador() {}

  string getNomeOrgLinked() const
  {
    return NomeOrgLinked;
  }

  void setNomeOrgLinked(const string &newName)
  {
    this->NomeOrgLinked = newName;
  }
};

#include "Pessoa.h"

class Juiz : public Pessoa
{

private:
  double Salario;

public:
  Juiz() {}
  Juiz(const string &nome, const string &CPF, unsigned int idade, const string &telefone, double salario) : Pessoa(nome, CPF, idade, telefone), Salario(salario) {}
  ~Juiz() {}

  double getSalario() const
  {
    return Salario;
  }

  void setSalario(double newName)
  {
    this->Salario = newName;
  }
};

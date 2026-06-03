#include "1-Pessoa.h"

Pessoa::Pessoa(string n, int i, string s)
{
    nome = n;
    idade = i;
    sexo = s;
}

Pessoa::~Pessoa()
{
}

void Pessoa::setNome(string n)
{
    nome = n;
}

string Pessoa::getNome()
{
    return nome;
}

void Pessoa::setIdade(int i)
{
    idade = i;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setSexo(string s)
{
    sexo = s;
}

string Pessoa::getSexo()
{
    return sexo;
}

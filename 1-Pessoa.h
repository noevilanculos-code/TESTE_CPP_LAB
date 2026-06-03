#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

class Pessoa
{
protected:
    string nome;
    int idade;
    string sexo;

public:
    Pessoa(string n="", int i=0, string s="");
    virtual ~Pessoa();

    void setNome(string n);
    string getNome();

    void setIdade(int i);
    int getIdade();

    void setSexo(string s);
    string getSexo();

    virtual void mostrarDados() = 0;
};

#endif

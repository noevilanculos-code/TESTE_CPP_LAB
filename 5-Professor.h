#ifndef PROFESSOR_H
#define PROFESSOR_H

#include "1-Pessoa.h"

class Professor : public Pessoa
{
private:
    int codigoProfessor;
    string disciplina;
    double salario;

public:
    Professor();
    Professor(string, int, string, int, string, double);

    int getCodigoProfessor();

    void aumentarSalario(double percentual);

    void mostrarDados();
};

#endif

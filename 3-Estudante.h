#ifndef ESTUDANTE_H
#define ESTUDANTE_H

#include "1-Pessoa.h"

class Estudante : public Pessoa
{
private:
    int numeroEstudante;
    string curso;
    float notas[3];

public:
    Estudante();
    Estudante(string, int, string, int, string, float[]);

    float calcularMedia();
    string verificarAprovacao();

    int getNumeroEstudante();

    void mostrarDados();
};

#endif

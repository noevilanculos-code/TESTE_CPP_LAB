#ifndef SISTEMA_H
#define SISTEMA_H

#include "3-Estudante.h"
#include "5-Professor.h"

class Sistema
{
private:
    Estudante* estudantes[10];
    Professor* professores[5];

    int qtdEst;
    int qtdProf;

public:
    Sistema();

    void cadastrarEstudante();
    void cadastrarProfessor();

    void listarEstudantes();
    void listarProfessores();

    void pesquisarNome(string nome);
    void remover(int id);

    void mostrarPolimorfismo();
};

#endif

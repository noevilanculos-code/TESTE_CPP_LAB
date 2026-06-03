#include "5-Professor.h"

Professor::Professor()
{
}

Professor::Professor(string n, int i, string s,
                     int cod, string disc, double sal)
                     : Pessoa(n,i,s)
{
    codigoProfessor = cod;
    disciplina = disc;
    salario = sal;
}

int Professor::getCodigoProfessor()
{
    return codigoProfessor;
}

void Professor::aumentarSalario(double percentual)
{
    salario += salario * percentual / 100;
}

void Professor::mostrarDados()
{
    cout<<"Nome: "<<nome<<endl;
    cout<<"Disciplina: "<<disciplina<<endl;
    cout<<"Salario: "<<salario<<endl;
}

#include "3-Estudante.h"

Estudante::Estudante()
{
}

Estudante::Estudante(string n, int i, string s,
                     int num, string c, float nt[])
                     : Pessoa(n,i,s)
{
    numeroEstudante = num;
    curso = c;

    int k;
    for(k=0; k<3; k++)
    {
        notas[k] = nt[k];
    }
}

float Estudante::calcularMedia()
{
    return (notas[0] + notas[1] + notas[2]) / 3;
}

string Estudante::verificarAprovacao()
{
    float media = calcularMedia();

    if(media >= 14)
        return "Dispensado";
    else if(media >= 10)
        return "Admitido";
    else
        return "Reprovado";
}

int Estudante::getNumeroEstudante()
{
    return numeroEstudante;
}

void Estudante::mostrarDados()
{
    cout<<"Nome: "<<nome<<endl;
    cout<<"Idade: "<<idade<<endl;
    cout<<"Curso: "<<curso<<endl;
    cout<<"Media: "<<calcularMedia()<<endl;
    cout<<"Estado: "<<verificarAprovacao()<<endl;
}

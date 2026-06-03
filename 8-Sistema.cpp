#include "7-Sistema.h"
#include <iostream>

using namespace std;

Sistema::Sistema()
{
    qtdEst = 0;
    qtdProf = 0;
}

void Sistema::cadastrarEstudante()
{
    if(qtdEst >= 10)
    {
        cout << "Limite de estudantes atingido!" << endl;
        return;
    }

    string nome, sexo, curso;
    int idade, numero;
    float notas[3];

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;
    cin.ignore();

    cout << "Sexo: ";
    getline(cin, sexo);

    cout << "Numero estudante: ";
    cin >> numero;
    cin.ignore();

    cout << "Curso: ";
    getline(cin, curso);

    cout << "Teste I: ";
    cin >> notas[0];

    cout << "Teste II: ";
    cin >> notas[1];

    cout << "Trabalho: ";
    cin >> notas[2];
    cin.ignore();

    estudantes[qtdEst] =
        new Estudante(nome, idade, sexo,
                      numero, curso, notas);

    qtdEst++;

    cout << "Estudante cadastrado com sucesso!" << endl;
}

void Sistema::cadastrarProfessor()
{
    if(qtdProf >= 5)
    {
        cout << "Limite de professores atingido!" << endl;
        return;
    }

    string nome, sexo, disciplina;
    int idade, codigo;
    double salario;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Idade: ";
    cin >> idade;
    cin.ignore();

    cout << "Sexo: ";
    getline(cin, sexo);

    cout << "Codigo: ";
    cin >> codigo;
    cin.ignore();

    cout << "Disciplina: ";
    getline(cin, disciplina);

    cout << "Salario: ";
    cin >> salario;
    cin.ignore();

    professores[qtdProf] =
        new Professor(nome, idade, sexo,
                      codigo, disciplina, salario);

    qtdProf++;

    cout << "Professor cadastrado com sucesso!" << endl;
}

void Sistema::listarEstudantes()
{
    int i;

    if(qtdEst == 0)
    {
        cout << "Nenhum estudante cadastrado." << endl;
        return;
    }

    for(i=0; i<qtdEst; i++)
    {
        estudantes[i]->mostrarDados();
        cout << endl;
    }
}

void Sistema::listarProfessores()
{
    int i;

    if(qtdProf == 0)
    {
        cout << "Nenhum professor cadastrado." << endl;
        return;
    }

    for(i=0; i<qtdProf; i++)
    {
        professores[i]->mostrarDados();
        cout << endl;
    }
}

void Sistema::pesquisarNome(string nome)
{
    int i;
    bool encontrou = false;

    for(i=0; i<qtdEst; i++)
    {
        if(estudantes[i]->getNome() == nome)
        {
            estudantes[i]->mostrarDados();
            encontrou = true;
        }
    }

    for(i=0; i<qtdProf; i++)
    {
        if(professores[i]->getNome() == nome)
        {
            professores[i]->mostrarDados();
            encontrou = true;
        }
    }

    if(!encontrou)
    {
        cout << "Pessoa nao encontrada." << endl;
    }
}

void Sistema::remover(int id)
{
    int i;

    for(i=0; i<qtdEst; i++)
    {
        if(estudantes[i]->getNumeroEstudante() == id)
        {
            delete estudantes[i];

            int j;
            for(j=i; j<qtdEst-1; j++)
            {
                estudantes[j] = estudantes[j+1];
            }

            qtdEst--;
            cout << "Estudante removido." << endl;
            return;
        }
    }

    for(i=0; i<qtdProf; i++)
    {
        if(professores[i]->getCodigoProfessor() == id)
        {
            delete professores[i];

            int j;
            for(j=i; j<qtdProf-1; j++)
            {
                professores[j] = professores[j+1];
            }

            qtdProf--;
            cout << "Professor removido." << endl;
            return;
        }
    }

    cout << "Codigo nao encontrado." << endl;
}

void Sistema::mostrarPolimorfismo()
{
    Pessoa* pessoas[15];

    int i;
    int total = 0;

    for(i=0; i<qtdEst; i++)
    {
        pessoas[total] = estudantes[i];
        total++;
    }

    for(i=0; i<qtdProf; i++)
    {
        pessoas[total] = professores[i];
        total++;
    }

    for(i=0; i<total; i++)
    {
        pessoas[i]->mostrarDados();
        cout << endl;
    }
}

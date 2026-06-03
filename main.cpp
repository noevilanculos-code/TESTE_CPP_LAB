#include <iostream>
#include <string>
#include "7-Sistema.h"

using namespace std;

int main()
{
    Sistema sistema;

    int opcao;
    int id;
    string nome;

    do
    {
        cout << "\n===================================";
        cout << "\n      SISTEMA DE GESTAO";
        cout << "\n===================================";
        cout << "\n1. Cadastrar estudante";
        cout << "\n2. Cadastrar professor";
        cout << "\n3. Mostrar estudantes";
        cout << "\n4. Mostrar professores";
        cout << "\n5. Pesquisar pessoa";
        cout << "\n6. Remover pessoa";
        cout << "\n7. Demonstrar polimorfismo";
        cout << "\n8. Sair";

        cout << "\n\nOpcao: ";
        cin >> opcao;

        cin.ignore();

        switch(opcao)
        {
            case 1:
                sistema.cadastrarEstudante();
                break;

            case 2:
                sistema.cadastrarProfessor();
                break;

            case 3:
                sistema.listarEstudantes();
                break;

            case 4:
                sistema.listarProfessores();
                break;

            case 5:
                cout << "Nome: ";
                getline(cin, nome);
                sistema.pesquisarNome(nome);
                break;

            case 6:
                cout << "Numero/Codigo: ";
                cin >> id;
                sistema.remover(id);
                break;

            case 7:
                sistema.mostrarPolimorfismo();
                break;

            case 8:
                cout << "\nPrograma encerrado.\n";
                break;

            default:
                cout << "\nOpcao invalida.\n";
        }

    } while(opcao != 8);

    return 0;
}

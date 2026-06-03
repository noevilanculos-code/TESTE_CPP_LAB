#include "Sistema.h"

int main()
{
    int opcao;

    do
    {
        cout<<"\n===== MENU ====="<<endl;
        cout<<"1. Cadastrar estudante"<<endl;
        cout<<"2. Cadastrar professor"<<endl;
        cout<<"3. Mostrar estudantes"<<endl;
        cout<<"4. Mostrar professores"<<endl;
        cout<<"5. Pesquisar pessoa"<<endl;
        cout<<"6. Remover pessoa"<<endl;
        cout<<"7. Verificar aprovacao"<<endl;
        cout<<"8. Aumentar salario"<<endl;
        cout<<"9. Salvar arquivo"<<endl;
        cout<<"10. Ler arquivo"<<endl;
        cout<<"11. Sair"<<endl;

        cin>>opcao;

        switch(opcao)
        {
            case 11:
                cout<<"Fim do programa"<<endl;
                break;

            default:
                cout<<"Opcao em construcao"<<endl;
        }

    }while(opcao != 11);

    return 0;
}

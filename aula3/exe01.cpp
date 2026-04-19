//Sistemas de validação com regras encadeadas
#include <iostream>
using namespace std;

int main() {
    int idade, nivel;
    int autorizacao;

    //Dados
    cout << " SISTEMA DE VALIDAÇÃO COM REGRAS ENCADEADAS  " << endl;
    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade < 16) {
        cout << "\nAcesso Negado!" << endl;
        cout << "Idade minima para acesso é 16 anos." << endl;
        return 0;
    }

    else if (idade >=16 && idade <= 17) {
        cout << "Digite a autorização (1 para SIM/ 0 para NÃO): ";
        cin >> autorizacao;

        if (autorizacao == 1) {
            cout << "\n Acesso permitido (com restrições)!" << endl;
            cout << "Nivel básico(1)." << endl;
            nivel = 1;

        } else {
            cout << "\nAcesso negado!." << endl;
            cout << "Para idade de 16 e 17 anos e necessário autorização." << endl;
            return 0;
        }
    }
    else if (idade >= 18) {
        cout << "Digite o nível de acesso (1- Básico, 2 Intermediário, 3- Total): ";
        cin >> nivel;

        switch (nivel) {
            case 1:
                cout << "\nAcesso permitido!" << endl;
                cout << "Nivel: Básico (1)" << endl;
                break;
            case 2:
                cout << "\nAcesso permitido!" << endl;
                cout << "Nivel intermediaário (2)" << endl;
                break;
            case 3:
                cout << "\nAcesso permitido!" << endl;
                cout << "Nivel: Total (3)" << endl;
                break;
            default:
                cout << "\nErro: Nivel inválido!" << endl;
                cout << "Niveis disponiveis (1), (2), (3). " << endl;
                return 0;
        

        }
    }
    cout << "Idade: " << idade << " anos" << endl;

    if (idade < 18) {
        cout << "Acesso com restrições(menor de idade)" << endl;

    } else {
        cout << "Acesso completo " << endl;

    }
    cout << "Acesso concedido com sucesso!" << endl;
    return 0;
}

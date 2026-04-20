/*Escreva um programa que solicite do usuário dia, mês e ano atual e, em seguida, 
o programa exibe a data informada.*/
#include <iostream>
using namespace std;

//definição da estrutura
struct Data {
    int dia; 
    int mes;
    int ano;
};

int main() {
    Data hoje;
    cout << "Digite o dia atual: ";
    cin >> hoje.dia;
    cout << "Digite o mês atual: ";
    cin >> hoje.mes;
    cout << "Digite o ano atual: ";
    cin >> hoje.ano;

    cout << "\nData informada: " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
    return 0;
}

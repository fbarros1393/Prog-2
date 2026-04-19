//Exercício 4
//Objetivo: Ler nome e salário, exibindo o salário com duas casas decimais.
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string nome_completo;
    double salario;

    cout <<"Digite seu nome completo: ";
    getline(cin, nome_completo);

    cout << "Digite seu salário: ";
    cin >> salario;

    cout << "Nome completo: " << nome_completo << endl;
    cout << "Salario: R$ " << fixed << setprecision(2) << salario << endl;

    return 0;
    


}
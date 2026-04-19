//Exercicio 1: Desenvolva um programa que leia o nome completo de um usuário e sua idade,
//e exiba essas informações de forma organizada na tela, ultilizando "cin", "getline" e "cout".
#include <iostream>
#include <string>
using namespace std;

int main () {
    string nomecompleto;
    int idade;
    cout << "Digite seu nome completo: ";
    getline(cin, nomecompleto);
    cout <<"Digite sua idade: ";
    cin >> idade;

    cout << "Nome completo: " << nomecompleto << endl;
    cout << "Idade: " << idade << endl;
    return 0;
}

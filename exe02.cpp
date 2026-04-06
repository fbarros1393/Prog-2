//Exercicio 2: Crie um programa que leia o nome completo, idade e altura de uma pessoa,
//armazenando corretamente cada tipo de dado e exibindo todas as informações ao final de forma clara.

#include <iostream>
#include <string>
using namespace std;

int main () {
    string nome_completo;
    int idade;
    float altura;

    cout <<"Digite Seu Nome Completo: ";
    getline(cin, nome_completo);

    cout <<"Digite Sua idade: ";
    cin >> idade;
    
    cout << "Digite sua altura: ";
    cin >> altura;

    cout <<"Nome Completo: " << nome_completo << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << "M" << endl;

    return 0;
}
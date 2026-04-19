//Objetivo: Ler nome completo, idade e 3 notas. Calcular a média e exibir tudo formatado.
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string nome;
    int idade;
    double nota1, nota2, nota3, media;

    cout << "Idade do aluno: ";
    cin >> idade;

    
    cin.ignore(); //limpar o "enter" que ficou na memória.

    cout <<"Nome completo do aluno: ";
    getline(cin, nome);

    cout << "Digite a nota 1: ";
    cin >> nota1;
    cout << "Digite a nota 2: ";
    cin >> nota2;
    cout << "Digite a nota 3: ";
    cin >> nota3;

    // Calculando a média 
    media = (nota1 + nota2 + nota3) / 3;
    cout << "Resultado do Aluno: \n ";
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << " anos" << endl;
    cout << "Media Final: " << fixed << setprecision(2) << media << endl;
    
    return 0;
}
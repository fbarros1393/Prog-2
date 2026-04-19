//Exercício 3
//Objetivo: Ler três valores numéricos e exibir na mesma ordem.
#include <iostream>
#include <string>
using namespace std;

int main() {
    double valor1, valor2, valor3;

    cout << "Digite o primeiro valor: ";
    cin >> valor1;

    cout << "Digite o segundo  valor: ";
    cin >> valor2;

    cout << "Digite o terceiro valor: ";
    cin >> valor3;

    cout << "\nValores digitados: " <<endl;
    cout << valor1 << " - " << valor2 << " - " << valor3  << endl;

    return 0;

}
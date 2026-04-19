//Número perfeito
#include <iostream>
using namespace std;

int main() {
    int numero, soma = 0;
    cout << "Numero Perfeito" << endl;
    cout << "\n-----------------------------" << endl;
    cout << "Digite um número: ";
    cin >> numero;
    cout << "Divisores de " << numero << " (excluindo ele mesmo ) ";
    //encontra e exibe os divisores do numero

    for (int i = 1;  i < numero; i++) {
        if (numero % i == 0) {
            cout  << i  << "  ";
            cout << "+";
            soma += i;
        }

            
    }
    cout << endl;
    cout << "Soma dos divisores: " << soma << endl;


    if (soma == numero) {
        cout << "\nO número " << numero << " é perfeito." << endl;
    } else {
        cout << "\nO número " << numero << " não é perfeito." << endl;
    }


    return 0;
}
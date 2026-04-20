/*Escreva um programa que solicite ao usuário digitar uma quan a em dólares que 
você deseja que seja conver da para reais. Seu programa deve implementar uma 
função inline. Após a entrada da quan a em dólares, o programa calcula e retorna 
a quantia convertida em reais. */

#include <iostream>
using namespace std;

//Função inline
inline double converter_dolares(double dolares, double cotacao) {
    return (dolares * cotacao);
}

int main() {
    double quantia_dolar, cotacao;
    cout << "Digite a quandia em dolares: ";
    cin >> quantia_dolar;
    cout << "Digite o valor da cotação: ";
    cin >> cotacao;
    double resultado = converter_dolares(quantia_dolar, cotacao);
    cout << quantia_dolar <<  " dolares convertida em reais = R$ " << resultado << endl;
    return 0; 

}
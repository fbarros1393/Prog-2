/*Escreva um programa que solicite ao usuário digitar dois valores inteiros e, em 
seguida, o programa principal chama uma função, denominada soma, passando 
os parâmetros que o usuário digitou.*/

#include <iostream>
using namespace std;

//Função que soma 
int soma(int a, int b) {
    return (a + b);

}

int main() {
    int valor1, valor2;
    cout << "Digite o valor 1: ";
    cin >> valor1;
    cout << "\nDigite o segundo valor ";
    cin >> valor2;

    //Chamando a função 
    cout << "A soma de ( " << valor1 << " + " << valor2 << " ) = " << soma(valor1, valor2) << endl;
    return 0;
}
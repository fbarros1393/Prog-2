/*Elabore um programa que cria um array bidimensional com valores do tipo 
double. Chame esse array de despesas[ANO][TRIMESTRE]. Adicionalmente, você 
deve definir ANO=2 e TRIMESTRE=4. Em seguida, deve criar um laço que solicite ao 
usuário digitar os valores de despesas para cada um dos semestres nos dois 
anos. Ao final, o programa exibirá uma tabela que mostra os valores das despesas 
de cada ano, sendo listadas por trimestre, além do valor total de despesas nos 
dois anos*/

#include <iostream>
using namespace std;

#define ANO 2
#define TRIMESTRE 4

int main() {
    //Criação do array bidimensional
    double despesas[ANO][TRIMESTRE];
    double total_geral = 0;

    //Laço para solicitar os valores 
    for (int i = 0; i < ANO; i++) {
        cout << " ----- Ano " << i + 1 << "-----" << endl;
        for (int j = 0; j < TRIMESTRE; j++) {
            cout << " Digite as despesas do  " << j + 1 << "º Trimestre: ";
            cin >> despesas[i][j];
            total_geral += despesas[i][j];
        } 

    }
    //exibr tabela
    cout << "\nTabela de Despesas" << endl;
    for(int i = 0; i < ANO; i++) {
         cout << " ----- Ano " << i + 1 << "-----" << endl;
        for(int j = 0; j < TRIMESTRE; j++) {
            cout << "[ " << j+1 << "º Trimestre = R$ " << despesas[i][j] << "]" << endl;
        }
        cout << endl;
    }
    cout << "\nValor total das despesas no dois anos = R$ " << total_geral << endl;
    return 0;
}
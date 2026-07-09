/*screva um programa que crie um array de double e dque permita entrar com até 
100 valores. Entretanto, quando seu programa ler os dados digitados pelo usuário, 
ele deve usar a instrução:
a. cin >> *(a + j); // usando *(a+j) para armazenar em a[j]
b. e, quando acumular os valores lidos, seu programa deve usar: 
c. soma += *(aPtr + j); // usando *aPtr para acessar a[j] Por fim, seu programa 
deve exibir a soma e a média dos valores digitados.*/

#include <iostream>
using namespace std;

int main() {
    //criação de um array double para 100 valores
    double a[100];
    int n;
    cout << " Quantos valores deseja digitar ?";
    cin >> n;
    
    //Garantindo que respeite o limite de valores do array 

    if (n > 100) n = 100;
    if (n <= 0) {
        cout << " Qauntida deve ser maior que 0. " << endl;
        return 1;
    }

    // Leitura dos dados 

    cout << " \nDigite os " << n << " Valores :" << endl;
    for (int j = 1; j< n ; j++) {
        cout << "Valor [" << j << "]:";
        cin >> *(a + j);
    }

    // Ponteiro que aponta para o inicio do array 
     double *aPtr = a;
     double soma = 0.0;

    // acumulando os valores 

    for (int j = 0; j < n; j++) {
        soma += *(aPtr + j);
    }

    // Cálculo da Média 
    double media = soma / n;

    // Exibição dos resultados 
    cout << "\n   REsultados  " << endl;
    cout << " Soma Total: " << soma << endl;
    cout << " Média: " << media << endl;

    return 0;
}
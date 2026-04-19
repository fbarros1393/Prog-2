//Simulação de caixa 
#include <iostream>
using namespace std;


double deposito = 0, saque = 0, saldo = 1000;


int main() {
    int  opcao;
   
    while (true) {
        cout << "            Menu               " ;
        cout << "\n-----------------------------" << endl;
        cout << "1. Ver Saldo" << endl;
        cout << "2. Depositar" << endl;
        cout << "3. Sacar" << endl;
        cout << "4. Sair"  << endl;
        cout << "Digite uma das opções: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "\n  Opçao 1. Ver Saldo              " ;
                cout << "\n-----------------------------" << endl;
                cout << "\nSeu Saldo é R$ " << saldo << endl;
                cout << "\n-----------------------------" << endl;
                break;
            case 2:
                cout << "\n  Opçao 2. Depositar              " ;
                cout << "\n-----------------------------" << endl;
                cout << "\nDigite o valor do deposito: " << endl;
                cin >> deposito; 

                if (deposito > 0) {
                    saldo = saldo + deposito;
                    cout << " \n Deposito realizado com sucesso! " << endl;
                    
                } else {
                    cout << "\n Valor inválido. Tente novamente. " << endl;
                }
                cout << "\n-----------------------------" << endl;
                break;
            case 3:
                cout << "\n    Opçao 3. Sacar              " ;
                cout << "\n-----------------------------" << endl;
                cout << "\nDigite o valor do saque: ";
                cin >> saque;

                if (saque > 0 && saque <= saldo) {
                    saldo = saldo - saque;
                    cout << "\n Saque realizado com sucesso!" << endl;
                
                } else {
                    cout << "\n Saldo insuficiente, tente novamente." << endl;

                }
                cout << "\n-----------------------------" << endl;
                break;
            case 4:
                cout << "\n    Opçao 4. Sair              ";
                cout << "\n-----------------------------" << endl;
                cout << "Opçao 4 (Sair)" << endl;
                cout << "\n Finalizando o programa ... " << endl;
                return 0;
            default:
                cout << "\n Opção inválida, digite novamente. " << endl;
        
    
    
        }
    }        






}
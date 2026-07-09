/*Crie a classe ContaBancaria contendo os atributos privados numeroConta e saldo (iniciado em 
0). Forneça apenas o método getter para o saldo e controle as modificações estritamente pelos 
métodos públicos depositar e sacar. */

#include <iostream>
#include <string>

class ContaBancaria {
private:
    std::string numeroConta;
    double saldo;

public:
    // Construtor
    ContaBancaria(std::string numero) {
        numeroConta = numero;
        saldo = 0.0; // Iniciado em 0
    }

    // Apenas o método getter para o saldo
    double getSaldo() {
        return saldo;
    }

    // Método para depositar
    void depositar(double valor) {
        if (valor > 0) {
            saldo += valor;
        } else {
            std::cout << "Valor de depósito inválido!\n";
        }
    }

    // Método para sacar
    void sacar(double valor) {
        if (valor > 0 && valor <= saldo) {
            saldo -= valor;
        } else {
            std::cout << "Saque indisponível (Saldo insuficiente ou valor inválido)!\n";
        }
    }
};
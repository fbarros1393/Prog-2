/*2. Crie uma classe Contador que armazene um valor inteiro positivo e sobrecarregue os 
operadores de incremento pré-fixado e pós-fixado (++), detalhando explicitamente a diferença 
de retorno e assinatura entre ambos.*/

#include <iostream>

class Contador {
private:
    int valor;

public:
    Contador(int v = 0) {
        if (v >= 0) valor = v;
        else valor = 0;
    }

    // 1. Operador Pré-Fixado (++c)
    // Assinatura: Não recebe parâmetros. 
    // Retorno: Retorna uma referência ao próprio objeto modificado.
    Contador& operator++() {
        this->valor++;       // Incrementa primeiro
        return *this;        // Retorna o objeto atualizado
    }

    // 2. Operador Pós-Fixado (c++)
    // Assinatura: Recebe um 'int' que não é usado, serve apenas para diferenciação.
    // Retorno: Retorna uma cópia do valor ANTES do incremento.
    Contador operator++(int) {
        Contador temporario = *this; // Salva o estado atual (antigo)
        this->valor++;               // Incrementa o objeto real
        return temporario;           // Retorna o estado antigo salvo
    }

    int getValor() const { return valor; }
};

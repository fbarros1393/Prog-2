/*1. IImplemente uma classe chamada MatrizDinamica que aloque uma matriz bidimensional de 
inteiros no heap. Projete o construtor parametrizado, o destrutor preventivo de vazamentos, e o 
construtor de cópia que execute a cópia profunda obrigatória.*/

#include <iostream>

class MatrizDinamica {
private:
    int linhas;
    int colunas;
    int** dados; // Ponteiro para ponteiro para criar a matriz bidimensional

public:
    // Construtor Parametrizado
    MatrizDinamica(int l, int c) : linhas(l), colunas(c) {
        dados = new int*[linhas];
        for (int i = 0; i < linhas; ++i) {
            dados[i] = new int[colunas]{0}; // Inicializa todos os elementos com zero
        }
    }

    // Construtor de Cópia (Cópia Profunda Obrigatória)
    MatrizDinamica(const MatrizDinamica& outra) : linhas(outra.linhas), colunas(outra.colunas) {
        // Aloca espaço na memória para a nova matriz
        dados = new int*[linhas];
        for (int i = 0; i < linhas; ++i) {
            dados[i] = new int[colunas];
            // Copia os valores reais da outra matriz
            for (int j = 0; j < colunas; ++j) {
                dados[i][j] = outra.dados[i][j];
            }
        }
    }

    // Destrutor (Prevenção de Vazamento de Memória)
    ~MatrizDinamica() {
        for (int i = 0; i < linhas; ++i) {
            delete[] dados[i]; // Libera cada linha
        }
        delete[] dados; // Libera o array de ponteiros
    }

    // Método auxiliar para modificar valores (apenas para teste)
    void set(int l, int c, int valor) {
        if (l >= 0 && l < linhas && c >= 0 && c < colunas) {
            dados[l][c] = valor;
        }
    }
};

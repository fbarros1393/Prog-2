/*1. Implemente a classe Gato com atributos privados nome, idade e peso. O construtor deve 
inicializar os dados, e o método público setter do peso deve impedir a inserção de valores 
menores ou iguais a zero. */


#include <iostream>
#include <string>

class Gato {
private:
    std::string nome;
    int idade;
    double peso;

public:
    // Construtor
    Gato(std::string n, int i, double p) {
        nome = n;
        idade = i;
        // Usa o setter aqui também para garantir a validação desde o início
        setPeso(p); 
    }

    // Setter para o peso com validação
    void setPeso(double p) {
        if (p > 0) {
            peso = p;
        } else {
            std::cout << "Erro: O peso deve ser maior que zero!\n";
            peso = 1.0; // Valor padrão caso tentem inserir algo inválido
        }
    }

    // Getters apenas para demonstração
    std::string getNome() { return nome; }
    double getPeso() { return peso; }
};
/*1. Criar Classe Base e Derivada Implemente uma classe base chamada Veiculo contendo um 
atributo público do tipo texto marca. Em seguida, crie uma classe derivada chamada Carro que 
herde publicamente de Veiculo e adicione um atributo inteiro específico chamado 
numeroPortas.
2. Implementar Função Virtual Declare na classe base Veiculo uma função membro chamada 
emitirSom(), configurando-a como uma função virtual que exiba na tela uma mensagem 
genérica sobre o ruído do motor.
3. Sobrescrever Método Na classe derivada Carro, realize a sobrescrita (override) do método 
virtual emitirSom(). A nova implementação deve exibir na tela uma mensagem específica 
simulando o som de uma buzina automotiva.
*/

#include <iostream>
#include <string>

// 1 & 2. Classe Base: Veiculo com atributo público e função virtual
class Veiculo {
public:
    std::string marca; // Atributo público exigido no exercício 1

    // Construtor para facilitar a inicialização
    Veiculo(std::string m) : marca(m) {}

    // Função virtual exigida no exercício 2
    // O termo 'virtual' permite que as classes filhas modifiquem o comportamento deste método
    virtual void emitirSom() {
        std::cout << "O motor do veiculo esta fazendo um ruido generico: Vrummmm!\n";
    }

    // Destrutor virtual (boa prática essencial ao usar funções virtuais)
    virtual ~Veiculo() = default;
};

// 1 & 3. Classe Derivada: Carro herdando publicamente de Veiculo e sobrescrevendo o método
class Carro : public Veiculo {
public:
    int numeroPortas; // Atributo específico exigido no exercício 1

    // Construtor que passa a marca para a classe base e inicializa as portas
    Carro(std::string m, int portas) : Veiculo(m), numeroPortas(portas) {}

    // Sobrescrevida (override) exigida no exercício 3
    // A palavra 'override' avisa ao compilador que estamos substituindo o método da classe base
    void emitirSom() override {
        std::cout << "A buzina do carro esta tocando: Beep Beep!\n";
    }
};

int main() {
    // Criando um carro diretamente
    Carro meuCarro("Ford", 4);
    std::cout << "Carro da marca: " << meuCarro.marca << " com " << meuCarro.numeroPortas << " portas.\n";
    meuCarro.emitirSom(); // Saída: Beep Beep!

    std::cout << "------------------------------------\n";

    // Demonstração do Polimorfismo em ação:
    // Um ponteiro de Veiculo apontando para um objeto Carro
    Veiculo* v = new Carro("Ferrari", 2);
    
    // Graças ao 'virtual' e 'override', ele vai emitir o som do CARRO, não do veículo genérico
    v->emitirSom(); // Saída: Beep Beep!

    delete v; // Libera a memória
    return 0;
}
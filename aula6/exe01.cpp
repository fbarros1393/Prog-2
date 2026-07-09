/*● Pegue um código simples que utilize int *ptr = new int(42); e delete ptr; e 
refatore-o utilizando std::make_unique;
*/
#include <iostream> 
#include <memory>

int main() {
    //Código original 
    // int *ptr = new int(42)
    //std::cout << *ptr << std::endl;
    //delete ptr;

    //Código refatorado
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    
    std::cout << " o valor apontado é: " << *ptr << std::endl;

    // memória será liberada automaticamente quando ptr sair do escopo

    return 0;

}
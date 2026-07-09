/*3. Desenvolva uma classe StringSegura e aplique as diretivas = default e = delete para garantir 
que os objetos desta classe possam ser movidos em memória, mas nunca copiados por 
atribuição tradicional.*/

#include <iostream>
#include <string>

class StringSegura {
private:
    std::string texto;

public:
    // Construtor padrão e parametrizado
    StringSegura(std::string t = "") : texto(t) {}

    // 1. Permite o Construtor de Cópia Tradicional (Opcional, mas comum em Semântica de Movimento)
    StringSegura(const StringSegura& outra) = default;

    // 2. BLOQUEIA a Atribuição Tradicional por Cópia
    // Se alguém tentar fazer: objetoA = objetoB; o código não irá compilar.
    StringSegura& operator=(const StringSegura& outra) = delete;

    // 3. PERMITE o Construtor de Movimento
    // Permite que o objeto seja movido (ex: ao retornar de funções)
    StringSegura(StringSegura&& outra) noexcept = default;

    // 4. PERMITE a Atribuição por Movimento
    // Permite fazer: objetoA = std::move(objetoB);
    StringSegura& operator=(StringSegura&& outra) noexcept = default;
};
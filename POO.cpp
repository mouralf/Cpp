#include <iostream>
#include <string>

class Carro {
public:
    // Atributos
    std::string marca;
    std::string modelo;
    int ano;
    int velocidade;

    // Construtor da classe
    Carro(std::string marca, std::string modelo, int ano, int velocidade) {
        this->marca = marca;
        this->modelo = modelo;
        this->ano = ano;
        this->velocidade = velocidade;
    }

    // Método para imprimir informações do carro
    void imprimirInformacoes() {
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Ano: " << ano << std::endl;
        std::cout << "Velocidade: " << velocidade << " km/h" << std::endl;
    }
};

int main() {
    // Criando um objeto da classe "Carro" e atribuindo valores aos seus atributos
    Carro meuCarro("Toyota", "Corolla", 2022, 100);

    // Imprimindo as informações do carro
    meuCarro.imprimirInformacoes();

    return 0;
}

/*
Adicione à classe Carro um método chamado acelerar que recebe um valor de aumento de velocidade e incrementa a velocidade atual do carro.

Crie um objeto da classe Carro, acelere-o algumas vezes e imprima a velocidade atual na tela.
*/

#include <iostream>
#include <string>

using namespace std;

class Carro {
public:
    //Atributos 
    string Marca;
    string Modelo;
    int Ano;
    int Velocidade;

    //Construtor
    Carro(string marca, string modelo,int ano, int velocidade){
        Marca = marca;
        Modelo = modelo;
        Ano = ano;
        Velocidade = velocidade;
    }

    //Imprime as infos
    void imprimeInfos(){
        cout << "Marca: " << Marca << endl;
        cout << "Modelo: " << Modelo << endl;
        cout << "Ano: " << Ano << endl;
        cout << "Velocidade: " << Velocidade << " km/h" << endl;
    }

    void acelerar(int aumento){
        //inserir input de dados
        Velocidade += aumento;
        cout << "Velocidade: " << Velocidade << " km/h" << endl;
    }
    
};

class CarroEsportivo : public Carro {
    public:
    //Atributos
    int Potencia;

    CarroEsportivo(string marca, string modelo,int ano, int velocidade, int potencia) : Carro(marca, modelo, ano, velocidade) {
        Potencia = potencia;
    }

    //Imprime as infos
    void imprimeInfos(){
        cout << "Marca: " << Marca << endl;
        cout << "Modelo: " << Modelo << endl;
        cout << "Ano: " << Ano << endl;
        cout << "Velocidade: " << Velocidade << " km/h" << endl;
        cout << "Potencia: " << Potencia << endl;
    }

    void modoEsporte(int nPotencia){
        Potencia = nPotencia;
        cout << "Potencia: " << Potencia << endl;
    }

};

int main() {
    
    Carro fusquinha("Volkswagen", "1938", 1938, 50);

    fusquinha.imprimeInfos();
    fusquinha.acelerar(10);
    
    

    CarroEsportivo bmw("BMW", "Preto", 2017, 200, 150);
    bmw.imprimeInfos();
    bmw.modoEsporte(170);
    bmw.acelerar(50);

    return 0;
}

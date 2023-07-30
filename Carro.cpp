/*
Crie uma classe chamada "Carro" que represente um carro e tenha os seguintes atributos: marca, modelo, ano e velocidade. 

Em seguida, crie um objeto da classe "Carro", atribua valores aos seus atributos e imprima as informações do carro na tela.
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

    //Imprime as infos
    void imprimeInfos(){
        cout << "Marca: " << Marca << endl;
        cout << "Modelo: " << Modelo << endl;
        cout << "Ano: " << Ano << endl;
        cout << "Velocidade: " << Velocidade << "km/h" << endl;
    }
    
};

int main() {
   Carro fusquinha;

   fusquinha.Marca = "Volkswagen";
   fusquinha.Modelo = "Branco";
   fusquinha.Ano = 1938;
   fusquinha.Velocidade = 50;

   fusquinha.imprimeInfos();

    return 0;
}

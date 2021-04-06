#include <iostream>

using namespace std;

class carro{
    private:
    int ano;
    float valor, km;

    public:

    //gets e sets
    void setano(int ano){
        this->ano = ano;
    }

    int getano(){
        return ano;
    }

    void setvalor(float valor){
        this->valor = valor;
    }

    float getvalor(){
        return valor;
    }

    void setkm(float km){
        this->km = km;
    }

    float getkm(){
        return km;
    }

    //construtor

    carro(int ano=0, float valor=-1, float km=-1){
        this->ano = ano;
        this->valor = valor;
        this->km = km;
    }
};

int main(){

    carro gol(2001, 26000, 9000);

    cout << "gol: " << endl;
     cout << "ano: " << gol.getano() << endl;
    cout << "valor: " << gol.getvalor() << endl;
    cout << "quilometragem: " << gol.getkm() << endl;

    carro camaro;

    camaro.setano(2015);
    camaro.setvalor(500000);
    camaro.setkm(0);

    cout << "camaro: " << endl;
    cout << "ano: " << camaro.getano() << endl;
    cout << "valor: " << camaro.getvalor() << endl;
    cout << "quilometragem: " << camaro.getkm() << endl;

    return 0;
}
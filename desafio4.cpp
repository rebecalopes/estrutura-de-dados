#include <iostream>

using namespace std;

//Algoritmo que calcula a potencia de numero sendo informado pelo usuário os dados

int calculaPotencia (int x, int y) {
    int result = 1;
    for (int i = 1; i<=y; i++){
      result *= x;
    }
    return result;
}

int main () {

int base;
int potencia;
int escolha;

do {
cout << "digite a base" << endl;
cin >> base;
cout << "digite o expoente" << endl;
cin >> potencia;

int calculo = calculaPotencia(base, potencia);
cout << "Resultado: " << calculo << endl; 

cout << "Gostaria de fazer outra operaçao?\nDigite 1 para SIM e 0 para NAO" << endl;
cin >> escolha;

} while (escolha == 1);
    return 0;
}
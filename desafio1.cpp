#include <iostream>

using namespace std;

//Algoritmo que calcula o valor de f(a) sendo a informado pelo usuario 

int calculaValor (int x) {
    int f;
    f = x ^ 2 - 3 * x + 5;
    return f;
}

int main () {

int numero;

cout << "digite um numero" << endl;
cin >> numero;

int calculo = calculaValor(numero);
cout << "Resultado: " << calculo << endl;

    return 0;
}
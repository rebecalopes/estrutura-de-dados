#include <iostream>

using namespace std;

//calcular fatorial de um numero

int fatorial(int x) {
    int f = 1;
    for (int i = 1; i<=x; i++ ){
        f*=i;
    }

    return f;
}

int main() {

    int numero;

    cout << "Digite um numero: " << endl;
    cin >> numero;

    int fatorialNum = fatorial(numero);

    cout << "O fatorial do numero " << numero << " é: " << fatorialNum << endl;

    return 0;
}
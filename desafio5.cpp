#include <iostream>

using namespace std;

bool verificaRequisitos (int idade, float salario) {

    if (idade >= 21 && salario <= 1200) {
        return true;
    } else {
        return false;
    }
}

int main () {

    int idade;
    float salario;

    cout << "Informe sua idade: " << endl;
    cin >> idade;

    cout << "Informe sua renda mensal: " << endl;
    cin >> salario;

    bool requisitos = verificaRequisitos(idade, salario);

    if (requisitos == true) {
        cout << "Parabens, voce se encaixa nos requisitos do programa Moradia Popular";
    } else {
        cout << "Infelizmente voce nao se encaixa nos requisitos do programa Moradia Popular";
    }

    return 0;
}
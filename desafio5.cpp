#include <iostream>

using namespace std;

void verificaRequisitos (int idade, float salario) {

    if (idade >= 21 && salario <= 1200) {
        cout << "Parabens, voce se encaixa nos requisitos do programa Moradia Popular";
    } else {
        cout << "Infelizmente voce nao se encaixa nos requisitos do programa Moradia Popular";
    }
}


int main () {

    int idade;
    float salario;

    cout << "Informe sua idade: " << endl;
    cin >> idade;

    cout << "Informe sua renda mensal: " << endl;
    cin >> salario;

    verificaRequisitos(idade, salario);

    return 0;
}
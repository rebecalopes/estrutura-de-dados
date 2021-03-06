#include <iostream>

using namespace std;

int main () {

    int a, b;
    a = 7;
    b = 3;
    int soma = a + b;
    int sub = a - b;
    int mult = a * b;
    int div = a / b;
    int resto = a%b;
    float divInteira = (float) a / (float) b;


    cout << "Soma: " << soma << endl; 
    cout << "Subtraçao: " << sub << endl;
    cout << "Multiplicaçao: " << mult << endl;
    cout << "Divisao: " << div << endl;
    cout << "Resto da divisao: " << resto << endl;
    cout << "Divisao inteira: " << divInteira << endl;

    return 0;
}
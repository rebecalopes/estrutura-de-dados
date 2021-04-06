#include <iostream>

using namespace std;

//calcular media de duas idades usando ponteiros

int main(){

    int* idade1 = new int;
    int* idade2 = new int;
    int* media = new int;

    cout << "Informe a idade da primeira pessoa: " << endl;
    cin >> *idade1;

    cout << "Informe a idade da segunda pessoa: " << endl;
    cin >> *idade2;

    *media = (*idade1 + *idade2) / 2;

    cout << "A media das idades é: " << *media;

    return 0;
}
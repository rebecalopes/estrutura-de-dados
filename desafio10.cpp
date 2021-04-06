#include <iostream>

using namespace std;

//função recebe 2 ponteiros e troca os valores entre os dois

void troca(int* &pont1, int* &pont2){
    int extra;
    extra = *pont1;
    *pont1 = *pont2;
    *pont2 = extra;
}

int main() {

    int* pont1 = new int;
    *pont1 = 10;
    int* pont2 = new int;
    *pont2 = 15;

    cout << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
    cout << "Ponteiro 2: " << pont2 << " e " << *pont2 << endl;

    troca(pont1, pont2);

    cout << "Ponteiro 1: " << pont1 << " e " << *pont1 << endl;
    cout << "Ponteiro 2: " << pont2 << " e " << *pont2 << endl;

    return 0;
}
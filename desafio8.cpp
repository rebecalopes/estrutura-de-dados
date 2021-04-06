#include <iostream>

using namespace std;

//informa o  tamano do vetor, imprime e perguta se deja fazer outro vetor 

int main(){

    int indice, repetir;

    do {
    cout << "Informe o tamanho do vetor: " << endl;
    cin >> indice;

    float* vetor = new float[indice];

    for(int i = 0; i < indice; i++){
        cout << "Informe o valor do indice " << i + 1 <<  " : " << endl;
        cin >> vetor[i];       
    }

    cout << "Vetor [ ";
    for(int i = 0; i < indice; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;

    cout << "Gostaria de imprimir outro vetor? (1 para SIM e 0 para NAO)" << endl;
    cin >> repetir;

    delete [] vetor;

    } while ( repetir == 1);
    
    return 0;
}
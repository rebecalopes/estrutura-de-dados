#include <iostream>

using namespace std;

//alocação estatica
int main() {
    
    //declaração de vetores
    int vet[4];
    vet[0] = 2;
    vet[1] = 4;
    vet[2] = 6;

    int vetor[7] = {1,3};

    int vet2[] = {3, 6, 9, 12, 15};

    //impressão de vetores

    for (int i = 0; i<4; i++) {
        cout << vet[i] << endl;
    }

    for (int i = 0; i<7; i++){
        cout << vetor[i] << endl;
    }

    //verifica tamanho do vetor em bytes
    int x = sizeof(vetor);
    cout << x << endl;

    return 0;
}
#include <iostream>

using namespace std;

//alocação estatica
int main() {
    
    //declaração de vetores
    int vet[4];
    vet[0] = 2;
    vet[1] = 4;
    vet[2] = 6;

    int vetorzinho[7] = {1,3};

    int vet2[] = {3, 6, 9, 12, 15};

    //impressão de vetores

    for (int i = 0; i<4; i++) {
        cout << vet[i] << endl;
    }

    for (int i = 0; i<7; i++){
        cout << vetorzinho[i] << endl;
    }

    //verifica tamanho do vetor em bytes
    int x = sizeof(vetorzinho);
    cout << x << endl;

    //alocação dinamica
    int tamanho;
    cout << "Digite o tamanho do vetor: " << endl;
    cin >> tamanho;

    int* vetor = new int[tamanho];

    for (int i = 0; i < tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i = 0; i < tamanho; i++){
        cout << vetor[i] << " ";
    }

    return 0;
}
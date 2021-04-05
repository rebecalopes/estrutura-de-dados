#include <iostream>

using namespace std;

//informar as dimensões das matrizes, os elementos de 2 matrizes e imprimir a soma das matrizes

int main() {

    int linha, coluna;

    cout << "Informe a quantidade de linhas da matriz: " << endl;
    cin >> linha;
    cout << "Informe a quantidade de colunas da matriz: " << endl;
    cin >> coluna;

    int matriz1[linha][coluna], matriz2[linha][coluna];
 

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << "Informe o valor da posicao " << i + 1 << " " << j + 1 << " na matriz 1: " << endl;
            cin >> matriz1[i][j];
        }
    }

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << "Informe o valor da posicao " << i + 1 << " " << j + 1 << " na matriz 2: " << endl;
            cin >> matriz2[i][j];
        }
    }

    int matrizsoma[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

     for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            cout << matrizsoma[i][j] << " ";
        }
    }

    return 0;   
}
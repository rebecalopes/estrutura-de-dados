#include <iostream>

using namespace std;

int main() {

    int matriz [2][3];

    matriz[0][0] = 10;
    matriz[0][1] = 15;
    matriz[0][2] = 20;

    matriz[1][0] = 25;
    matriz[1][1] = 30;
    matriz[1][2] = 35;

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
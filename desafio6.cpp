#include <iostream>

using namespace std;

//informa os gastos de alimentação de 5 familias, calcula a media e diz
//se cada familia gastou a cima, abaixo ou na media

int main() {

    float gasto[5];
    float media;

    for (int i = 0; i < 5; i++){
        cout << "Informe o valor do gasto da familia " << i+1 << ": " << endl;
        cin >> gasto[i];
    }

    for(int i = 0; i < 5; i++){
        media+=gasto[i];
    }

    media = media/5;
    cout << "Media de gasto: " << media << endl;

    for (int i = 0; i < 5; i++){
        if (gasto[i] < media) {
            cout << "O gasto da familia " << i+1 << " esta abaixo da media" << endl; 
        } else if (gasto[i] > media){
            cout << "O gasto da familia " << i+1 << " esta acima da media" << endl;
        } else {
            cout << "O gasto da familia " << i+1 << " esta na media" << endl;
        }
    }

    return 0;
}
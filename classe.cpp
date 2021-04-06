#include <iostream>

using namespace std;

class saudacao{
    public:

    void manha(){
        cout << "Bom dia" << endl;
    }

    void tarde(){
        cout << "Boa tarde" << endl;
    }

    void noite(){
        cout << "Boa noite" << endl;
    }

};

int main(){

    saudacao saudacao;
    saudacao.manha();
    saudacao.tarde();
    saudacao.noite();

    return 0;
}
#include <iostream>

using namespace std;

//Calcular media do aluno e verficar se o aluno está acima, abaixo ou na media da turma

double media(double x, double y, double z) {
    double media;
    media = (x + y + z) / 3;
    return media;
}

int main() {

    double nota1, nota2, nota3;
    double mediaTurma;
    
    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;
    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;
    cout << "Digite a terceira nota: " << endl;
    cin >> nota3;
    cout << "Digite a media da turma: " << endl;
    cin >> mediaTurma;

    double mediaAluno = media(nota1, nota2, nota3);
    cout << "Media do aluno: " << mediaAluno << endl;

    if(mediaAluno > mediaTurma){
        cout << "Aluno acima da media da turma" << endl;

    } else if(mediaAluno < mediaTurma) {
        cout << "Aluno abaixo da media da turma" << endl;

    } else if(mediaAluno == mediaTurma){
        cout << "Aluno ne media da turma" << endl;

    }

    return 0;
}
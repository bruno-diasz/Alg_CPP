#include <iostream>
using namespace std;

float calcMedia(float n1, float n2, float n3, float n4){
    return ((n1*3)+(n2*4)+(n3*5)+(n4*6))/18;
}
int main(){
    float media;
    float nota1, nota2, nota3, nota4;
    cout << "Digite a notas dos 4 Bimestres: "<< endl;
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    media = calcMedia(nota1,nota2,nota3,nota4);
    if (media >= 6){
        cout << "Sua média atual é de "<<media<< ", Você está Aprovado! Parabéns!"<<endl;
    }else if(media<4){
        cout << "Sua média atual é de "<<media<< ", Você está Reprovado! Estude mais na próxima!"<<endl;
    }else{
        cout << "Sua média atual é de "<<media<< ", Você está em Prova Final! Estude mais!"<<endl;
    }
    return 0;
}
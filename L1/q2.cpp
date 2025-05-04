#include <iostream>

using namespace std;

int main(){
    string nome_b ="Bruno", nome_c="Cicrano", etnia_b="Pardo",etnia_c="Preto",escolhido;
    int idade_b = 23, idade_c =30;
    double altura_b = 1.75, altura_c = 1.83;
    char sangue_b = 'B', sangue_c = 'A';

    cout << "Deseja ver dados sobre Bruno ou Cicrano? " << endl;
    cin >> escolhido;
    if(escolhido == "Bruno" || escolhido == "bruno"){
        cout<<"Nome: "<< nome_b << endl<< "Idade: " << idade_b << endl <<"Tipo Sanguineo: " << sangue_b << endl << "Altura: " << altura_b << endl << "Etnia: " << etnia_b << endl; 
    }else if(escolhido == "Cicrano" || escolhido == "cicrano"){
        cout<<"Nome: "<< nome_c << endl<< "Idade: " << idade_c << endl <<"Tipo Sanguineo: " << sangue_c << endl << "Altura: " << altura_c << endl << "Etnia: " << etnia_c << endl; 
    }else{
        cout<< "Usuario nao encontrado";
    }
    return 0;
}
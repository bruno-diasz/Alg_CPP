#include <iostream>
using namespace std;

double calc_media(int nota1, int nota2, int nota3){
    double media = (nota1+nota2+nota3)/3;
    return media;
}
int main(int argc, char const *argv[])
{
    double nota1,nota2,nota3;
    cout << "Digite as 3 notas para fazer a média: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    cout << calc_media(nota1,nota2,nota3)<<endl;

    return 0;
}

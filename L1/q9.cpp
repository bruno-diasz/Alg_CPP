#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float salarioAnual,salarioHora;
    cout << "Digite o salário anual: ";
    cin>>salarioAnual;
    salarioHora=salarioAnual/(12*22*8);
    cout<<fixed<<setprecision(2);
    cout<<"O valor da hora trabalhada é de: R$ "<<salarioHora<<endl;
}
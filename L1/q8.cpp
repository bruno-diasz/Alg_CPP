#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    double hora,horaExtra,valorHora,valorHoraExtra;
    cout << "Digite a quantidade de horas normais, a quantidade de hora extra e o valor da hora normal! \n";
    cin >> hora >> horaExtra>> valorHora;
    valorHoraExtra = horaExtra*(valorHora*1.5);
    cout <<fixed << setprecision(2)<< "Valor a receber será de: R$"<<valorHoraExtra+hora*valorHora<< endl;

}
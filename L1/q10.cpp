#include <iostream>
#include <iomanip>
using namespace std;


int main (){
    
    float valorGasolina,kmMes,kmPorLitro,valorOleo,valorSeguro,valorIPVA,valorConcerto,outros;

    cout << "Digite o preço da gasolina: ";
    cin >> valorGasolina;
    cout<< "Digite os KM rodados mensais: ";
    cin >> kmMes;
    cout << "Digite o quantos km o carro faz por litro: ";
    cin >> kmPorLitro;
    cout << "Digite o valor do oleo: ";
    cin >> valorOleo;
    cout << "Digite o valor do seguro: ";
    cin >> valorSeguro;
    cout << "Digite o valor do carro (para cálculo do IPVA): ";
    cin >> valorIPVA;
    cout << "Valor da manutenção mensal: ";
    cin >> valorConcerto;
    cout << "Digite outros gastos mensais: ";
    cin >> outros;

    cout <<"O custo mensal de ter um carro é de: R$ " <<(((kmMes/kmPorLitro)*valorGasolina)+(valorOleo*2/12)+(valorSeguro/12)+(0.05* valorIPVA /12)+ valorConcerto+outros) << endl;


}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double gasolina = 4.75, alcool = 4.00, diesel = 3.50, valor, litros;
    int op;
    cout<< "Digite o tipo de combustivel: " << endl;
    cout << "1- Gasolina || 2- Álcool || 3- Diesil" <<endl;
    cin >> op;
    cout << "Digite o valor em Reais: ";
    cin >> valor;

    cout << fixed << setprecision(2);

    switch (op)
    {
    case 1:
        litros =  valor/gasolina;
        cout<< "Voce comprou: " << litros<<" litros de Gasolina"<< endl;
        break;
    
    case 2:
        litros =  valor/alcool;
        cout<< "Voce comprou: " << litros<<" litros de Alcool"<< endl;
        break;

    case 3:
        litros =  valor/diesel;
        cout<< "Voce comprou: " << litros<<" litros de Diesil" <<endl;
        break;

    default:
        cout << "Opção inválida. Escolha 1, 2 ou 3." << endl;
        break;
    }
    
    return 0;
}

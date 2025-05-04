#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double valor_compra = 0;
    int qtd_parcela= 0;

    cout << "Digite o valor da compra: " << endl;
    cin >> valor_compra;

    cout << "Digite a quantidade de parcelas: " << endl;
    cin >> qtd_parcela;

    cout << fixed << setprecision(2) <<"Valor da compra à vista: " << valor_compra - (valor_compra*0.10 )<<" R$" <<endl;
    cout << "Valor da compra à prazo: " << valor_compra + (valor_compra*0.20) << " R$" << endl;
    cout <<qtd_parcela<< "x de " << (valor_compra + (valor_compra*0.20))/qtd_parcela <<" R$"<< endl;
    

    return 0;
}
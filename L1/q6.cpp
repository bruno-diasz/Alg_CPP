#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variáveis para entrada de dados
    double valor_gasolina, valor_alcool;
    double km_por_litro_gasolina, km_por_litro_alcool;
    double litros_abastecidos;

    // Entrada de dados
    cout << "Digite o valor do litro da gasolina: R$ ";
    cin >> valor_gasolina;

    cout << "Digite o valor do litro do álcool: R$ ";
    cin >> valor_alcool;

    cout << "Digite a quilometragem por litro com gasolina (km/l): ";
    cin >> km_por_litro_gasolina;

    cout << "Digite a quilometragem por litro com álcool (km/l): ";
    cin >> km_por_litro_alcool;

    cout << "Digite a quantidade de litros que vai ser colocada no carro: ";
    cin >> litros_abastecidos;

    // Cálculo das distâncias
    double distancia_gasolina = km_por_litro_gasolina * litros_abastecidos;
    double distancia_alcool = km_por_litro_alcool * litros_abastecidos;

    // Cálculo do custo por km
    double custo_km_gasolina = (valor_gasolina * litros_abastecidos) / distancia_gasolina;
    double custo_km_alcool = (valor_alcool * litros_abastecidos) / distancia_alcool;

    // Saída formatada com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "\nCusto por km com GASOLINA: R$ " << custo_km_gasolina << endl;
    cout << "Custo por km com ÁLCOOL: R$ " << custo_km_alcool << endl;

    // Comparação
    if (custo_km_gasolina < custo_km_alcool) {
        cout << "É mais vantajoso abastecer com GASOLINA." << endl;
    } else if (custo_km_alcool < custo_km_gasolina) {
        cout << "É mais vantajoso abastecer com ÁLCOOL." << endl;
    } else {
        cout << "O custo por km é o mesmo para GASOLINA e ÁLCOOL." << endl;
    }

    return 0;
}

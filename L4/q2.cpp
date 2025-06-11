#include <iostream>
using namespace std;

int main() {
    int tamanho;

    cout << "Digite o total de números: ";
    cin >> tamanho;

    int lista[tamanho];  
    int* maior = nullptr;

    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o número: ";
        cin >> lista[i];

        if (i == 0 || lista[i] > *maior) {
            maior = &lista[i];
        }
    }

    cout << "\nNúmeros digitados: ";
    for (int i = 0; i < tamanho; i++) {
        cout << lista[i] << " ";
    }

    cout << "\n\nMaior valor: " << *maior << endl;
    cout << "Endereço do maior valor: " << maior << endl;

    return 0;
}

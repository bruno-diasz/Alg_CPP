#include <iostream>
using namespace std;

// Função para ordenar o vetor com Insertion Sort
void insertionSort(int v[], int n) {
    for (int i = 1; i < n; i++) {
        int x = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > x) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = x;
    }
}

// Função que verifica se há elementos repetidos
bool semRepetidos(int v[], int n) {
    insertionSort(v, n); // ordena o vetor

    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1])
            return false; // encontrou repetição
    }
    return true; // nenhum elemento repetido
}

int main() {
    int n;

    cout << "Digite o número de elementos: ";
    cin >> n;

    int v[n];
    cout << "Digite os " << n << " elementos:\n";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    if (semRepetidos(v, n))
        cout << "Vetor sem elementos repetidos.\n";
    else
        cout << "Vetor com elementos repetidos.\n";

    return 0;
}

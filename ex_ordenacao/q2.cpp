#include <iostream>
using namespace std;

// Função para ordenar com Insertion Sort
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

// Função que conta os elementos que não se repetem
int contarNaoRepetidos(int v[], int n) {
    insertionSort(v, n);

    int count = 0;
    int i = 0;

    while (i < n) {
        int j = i + 1;
        while (j < n && v[j] == v[i]) {
            j++;
        }

        if (j == i + 1) {
            // elemento aparece só uma vez
            count++;
        }

        i = j; // avança para o próximo grupo
    }

    return count;
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

    int resultado = contarNaoRepetidos(v, n);
    cout << resultado << " elemento(s) não são repetidos.\n";

    return 0;
}

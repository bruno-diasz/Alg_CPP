#include <iostream>
#include <random>
#include <ctime>
using namespace std;


int somaDivisaoConquista(int arr[], int inicio, int fim) {
    int soma = 0; 
   
    if (inicio == fim){
        soma = arr[inicio];
    }
    else {
    
        int meio = (inicio + fim) / 2;

        int somaEsquerda = somaDivisaoConquista(arr, inicio, meio);
        int somaDireita = somaDivisaoConquista(arr, meio + 1, fim);

        soma= somaEsquerda + somaDireita;
    }
    return soma ;

}

int main() {
    //Parte 1
    int arr[] = {1,3,7,19,21,22,90,121,131,132};
    int tamanho = sizeof(arr) / sizeof(arr[0]);
    
    int resultado = somaDivisaoConquista(arr, 0, tamanho - 1);
    cout << "Soma dos elementos do array não aleatorio: " << resultado << endl;

    //Parte 2

    // Inicializa a semente do gerador rand() com o tempo atual
    srand(time(0));
    int tamanho2;

    cout << "Digite o tamanho do array aleatorio: "<< endl;
    cin >> tamanho2;

    int arr2[tamanho2]; 
    
    for (int i = 0; i < tamanho2; ++i) {
        int numero_aleatorio = rand() % 1000 + 1; 
        arr2[i] = numero_aleatorio;

    }

    int resultado2 = somaDivisaoConquista(arr2, 0, tamanho2 - 1);
    cout << "Soma dos elementos do array aleatorios: " << resultado2 << endl;

    return 0;
}

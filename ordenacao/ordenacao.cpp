#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;

void selectionSort(vector<int> &vetor)
{
    int n = vetor.size();
    for (int i = 0; i < n - 1; i++)
    {
        int menorIndice = i;
        for (int j = i + 1; j < n; j++)
        {
            if (vetor[j] < vetor[menorIndice])
            {
                menorIndice = j;
            }
        }
        swap(vetor[i], vetor[menorIndice]);
    }
}

void quickSort(vector<int> &vetor, int inicio, int fim)
{
    if (inicio < fim)
    {
        int pivo = vetor[fim];
        int i = (inicio - 1);
        for (int j = inicio; j <= fim - 1; j++)
        {
            if (vetor[j] < pivo)
            {
                i++;
                swap(vetor[i], vetor[j]);
            }
        }
        swap(vetor[i + 1], vetor[fim]);
        int posPivo = i + 1;
        quickSort(vetor, inicio, posPivo - 1);
        quickSort(vetor, posPivo + 1, fim);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cerr << "Uso: " << argv[0] << " <tamanho_vetor> <algoritmo>\n";
        cerr << "algoritmo: 1 = Selection Sort, 2 = Quick Sort\n";
        return 1;
    }

    int tamanhoVetor = stoi(argv[1]);
    int algoritmo = stoi(argv[2]);

    vector<int> vetor(tamanhoVetor);
    srand(time(0));
    for (int i = 0; i < tamanhoVetor; i++)
    {
        vetor[i] = rand() % 100000;
    }

    auto inicio = high_resolution_clock::now();

    if (algoritmo == 1)
        selectionSort(vetor);
    else if (algoritmo == 2)
        quickSort(vetor, 0, tamanhoVetor - 1);
    else
    {
        cerr << "Algoritmo inválido. Use 1 ou 2.\n";
        return 1;
    }

    auto fim = high_resolution_clock::now();
    duration<double> duracaoSegundos = fim - inicio;

    // Imprime CSV linha única: tamanho;algoritmo;tempo_em_segundos
    string nomeAlgoritmo = (algoritmo == 1) ? "Selection Sort" : "Quick Sort";
    cout << tamanhoVetor << ";" << nomeAlgoritmo << ";" << duracaoSegundos.count() << "\n";

    return 0;
}

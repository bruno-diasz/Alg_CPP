#include <iostream>
using namespace std;

// 1. Soma elementos de um array
int soma_elementos(int lista[], int tamanho) {
    int total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += lista[i];
    }
    return total;
}

// 2. Verifica duplicatas
bool verificar_duplicatas(int lista[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[i] == lista[j]) {
                return true;
            }
        }
    }
    return false;
}

// 3. Fibonacci recursivo
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// 4. Inverter array 
void inverter_lista(int lista[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho / 2; i++) {
        temp = lista[i];
        lista[i] = lista[tamanho - 1 - i];
        lista[tamanho - 1 - i] = temp;
    }
}

// 5. Potência otimizada
double potencia(double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        double temp = potencia(x, n / 2);
        return temp * temp;
    } else {
        return x * potencia(x, n - 1);
    }
}

int main() {
    int escolha;
    cout << "Escolha a função para executar:\n";
    cout << "1 - Soma elementos\n";
    cout << "2 - Verificar duplicatas\n";
    cout << "3 - Fibonacci\n";
    cout << "4 - Inverter lista\n";
    cout << "5 - Potência\n";
    cout << "Digite o número da função: ";
    cin >> escolha;

    // Dados de exemplo
    int lista[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    switch (escolha) {
        case 1: {
            cout << "Soma: " << soma_elementos(lista, tamanho) << endl;
            break;
        }
        case 2: {
            cout << "Tem duplicatas? " << (verificar_duplicatas(lista, tamanho) ? "Sim" : "Não") << endl;
            break;
        }
        case 3: {
            int n = 10;
            cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
            break;
        }
        case 4: {
            inverter_lista(lista, tamanho);
            cout << "Lista invertida: ";
            for (int i = 0; i < tamanho; i++) {
                cout << lista[i] << " ";
            }
            cout << endl;
            break;
        }
        case 5: {
            double x = 2.0;
            int n = 10;
            cout << x << "^" << n << " = " << potencia(x, n) << endl;
            break;
        }
        default:
            cout << "Opção inválida!" << endl;
    }

    return 0;
}
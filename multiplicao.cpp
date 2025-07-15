#include <iostream>
#include <cmath>
using namespace std;

// Conta o número de dígitos de um número
int numDigits(int n)
{
    if (n == 0)
        return 1;
    return floor(log10(n)) + 1;
}

// Multiplicação comum via divisão e conquista (sem otimizações de Karatsuba)
long long multiplicacaoNormal(int u, int v)
{
    // Caso base: números pequenos, faz multiplicação direta
    if (u < 10 || v < 10)
        return (long long)u * v;

    int n = max(numDigits(u), numDigits(v));
    int m = n / 2;
    int power = pow(10, m);

    // Divide os números
    int p = u / power;
    int q = u % power;

    int r = v / power;
    int s = v % power;

    // Calcula os produtos individualmente
    long long pr = multiplicacaoNormal(p, r);
    long long ps = multiplicacaoNormal(p, s);
    long long qr = multiplicacaoNormal(q, r);
    long long qs = multiplicacaoNormal(q, s);

    // Combina os resultados
    return pr * pow(10, 2 * m) + (ps + qr) * pow(10, m) + qs;
}

int main()
{
    int u, v;
    cout << "Digite dois inteiros positivos u e v: ";
    cin >> u >> v;

    long long resultado = multiplicacaoNormal(u, v);
    cout << "Resultado da multiplicação normal: " << resultado << endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

// Conta o número de dígitos de um inteiro positivo
int numDigits(int n)
{
    if (n == 0)
        return 1;
    return floor(log10(n)) + 1;
}

// Multiplicação baseada na fórmula fornecida (Karatsuba simplificada)
long long karatsuba(int u, int v)
{
    // Caso base: se os números forem pequenos, retorna a multiplicação direta
    if (u < 10 || v < 10)
        return (long long)u * v;

    int n = max(numDigits(u), numDigits(v));
    int m = n / 2;
    int power = pow(10, m);

    // Divide u em p e q
    int p = u / power;
    int q = u % power;

    // Divide v em r e s
    int r = v / power;
    int s = v % power;

    // Aplica a fórmula: p·r·10^n + (p·s + q·r)·10^(n/2) + q·s
    long long pr = karatsuba(p, r);
    long long ps = karatsuba(p, s);
    long long qr = karatsuba(q, r);
    long long qs = karatsuba(q, s);

    return pr * pow(10, 2 * m) + (ps + qr) * pow(10, m) + qs;
}

int main()
{
    int u, v;
    cout << "Digite dois inteiros positivos u e v: ";
    cin >> u >> v;

    long long resultado = karatsuba(u, v);
    cout << "Resultado da multiplicação: " << resultado << endl;

    return 0;
}

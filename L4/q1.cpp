#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int a, b;
    int *ptr_a, *ptr_b;
    cout << "Digite o inteiro A e o inteiro B: "<<endl;
    cin >> a >>b;
    ptr_a = &a;
    ptr_b = &b;
    cout << "Variavel A: "<< a << ", Variavel B: " << b << endl;
    cout << "Ponteiro A: "<< ptr_a << ", Ponteiro B: " << ptr_b << endl;
    return 0;
}

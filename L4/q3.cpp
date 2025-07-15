#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n, *ptr;
    cout << "Digite um número para ser printado usando ponteiro: ";
    cin >> n;
    ptr = &n;
    cout << "\nO número digitado foi o: " <<*ptr<<endl;
    return 0;
}

#include <iostream>
#include <math.h>
using namespace std;

bool isprime(int number){
    for(int i = 2; i<= sqrt(number); i++){
        if (number % i == 0){
            return false;
        }
    }
    return true;
}
 int main(int argc, char const *argv[])
 {
    int number;    
    cout<<"Digite o numemero para verificar se é primo: ";
    cin >> number;
    bool primo = isprime(number);
    if (primo){
        cout << "É um número primo" << endl;
    }else{
        cout << "Não é um número primo" << endl;
    }
    return 0;
 }
 
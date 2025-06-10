#include <iostream>
using namespace std;

double celsius_to_farenheit(double tempc ){
    double f = (tempc*9/5)+32;
    return f;
}
double farenheit_to_celsius(double tempf){
    double c = (tempf-32)*5/9;
    return c;
}
int main(int argc, char const *argv[]){
    cout << "Digite '1' para transformar de Cesius para Farenheit"<<endl;
    cout << "Ou '2' para transformar de Farenheit para Celsius"<<endl;
    int op;
    cin >> op;
    double temp;
    cout << "Digite a temperatura para conversão: ";
    cin >> temp;

    if (op == 1){
        cout << endl <<celsius_to_farenheit(temp) << " Fº" << endl;
    }else if (op ==2)
    {
        cout <<endl <<farenheit_to_celsius(temp) << " Cº" << endl;
    }
    


    return 0;
}

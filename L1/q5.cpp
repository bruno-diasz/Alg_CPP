#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double quadrado_area(double lado){
    return lado*lado;
}
double quadrado_perimetro(double lado){
    return lado*4;
}
double retangulo_area(double lado1, double lado2){
    return lado1*lado2;
}
double rentangulo_perimetro(double lado1, double lado2){
   return (2*lado1)+(2*lado2);
}
double triangulo_area(double base,double altura){
    return (base*altura)/2;
}
double circulo_area(double raio){
    return M_PI * pow(raio,2);
}
double circulo_perimetro(double raio){
    return 2* M_PI * raio;
}
int main(){
    int op = 0;
    double a,b = 0;
    while (true){
        cout <<"\n====MENU===="<<endl;
        cout <<"1.Quadrado"<<endl;
        cout <<"2.Retangulo"<<endl;
        cout <<"3.Triangulo"<<endl;
        cout <<"4.Circulo"<<endl;
        cout <<"9.Sair\n"<<endl;
        cin>> op;

        switch (op){
            case 1:
                cout << "Digite o Lado do Quadrado:"<<endl;
                cin >> a;
                cout << "A area do Quadrado é: "<<quadrado_area(a)<< endl;
                cout << "A Perimetro do Quadrado é: "<<quadrado_perimetro(a)<< endl;
                break;
            case 2:
                cout << "Digite o Lado1 do Retangulo:"<<endl;
                cin >> a;
                cout << "Digite o Lado2 do Retangulo:"<<endl;
                cin >> b;
                cout << "A area do Retangulo é: "<<retangulo_area(a,b)<< endl;
                cout << "A Perimetro do Retangulo é: "<<retangulo_area(a,b)<< endl;
                break;
            case 3:
                cout << "Digite o Base do Triangulo:"<<endl;
                cin >> a;
                cout << "Digite o Altura do Triangulo:"<<endl;
                cin >> b;
                cout << "A area do Triangulo é: "<<triangulo_area(a,b)<< endl;
                cout << "A Perimetro do Triangulo é: "<<"Informações insuficientes para calcular!"<< endl;
                break;
            case 4:
                cout << "Digite o raio do Circulo:"<<endl;
                cin >> a;
                cout << "A area do Circulo é: "<<circulo_area(a)<< endl;
                cout << "A Perimetro do Circulo é: "<<circulo_perimetro(a)<< endl;
                break;
            case 9:
                return 0;
            default:
                cout<< "\nDigite o valor valido!!"<<endl;
                break;
        }
    }
    
    return 0;
}
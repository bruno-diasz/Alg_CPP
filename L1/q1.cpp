#include <iostream>
using namespace std;

int main(){
    string nome, cor;
    float altura,peso;
    char sangue , cnh;
    bool cafe, viola;
    int idade,numero_irmaos,contador = 0;


    cout<< "Digite seu nome" << endl;
    cin >> nome ;
    if (nome == "bruno" || nome == "Bruno"){
         contador++;
        cout << contador << endl;
    }

    cout<< "Digite sua cor" << endl;
    cin >> cor ;
    if (cor == "azul" || cor == "Azul"){
        contador++;
        cout << contador << endl;
    }

    cout<< "Digite sua altura " << endl;
    cin >> altura ;
    if (altura == 1.75){
        contador++;
        cout << contador << endl;
    }

    cout<< "Digite seu peso" << endl;
    cin >> peso ;
    if (peso == 80 || peso == 80.0){
        contador++;
        cout << contador << endl;
    }

    cout<< "Digite seu tipo Sanguineo" << endl;
    cin >> sangue ;
    if (sangue == 'b' || sangue == 'B'){
        contador++;
        cout << contador << endl;
    }

    cout<< "Digite sua categoria de CNH" << endl;
    cin >> cnh ;
    if (cnh == 'A' || cnh == 'a'){
        contador++;
        cout << contador << endl;
    }

    cout<< "Digite sua idade" << endl;
    cin >> idade ;
    if (idade == 23){
        contador++;
        cout << contador << endl;
    }

    cout<< "Digite seu numero de irmãos" << endl;
    cin >> numero_irmaos ;
    if (numero_irmaos == 3){
        contador++;
        cout << contador << endl;
    }

    cout << "Você toma café?" << endl;
    cin >> cafe;
    if (cafe == true){
        contador++;
        cout << contador << endl;
    }
    

    if (contador >= 5){
        cout << "Essa pessoa parece comigo " << contador << endl;
    }else{
        cout << "Essa pessoa é diferente de mim" << endl;
    }
  
    return 0;
}